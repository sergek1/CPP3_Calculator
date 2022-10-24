GCC = g++ -std=c++17 -Wall -Werror -Wextra
OS := $(shell uname -s)
ifeq ($(OS), Darwin)
  FLAGS = -lgtest
  GCOV = --coverage
  OPEN = open
else
  FLAGS = -lgtest -lpthread -lrt -lm
  GCOV = -fprofile-arcs -ftest-coverage
  OPEN = xdg-open
endif

SOURCES = smartcalc/main.cpp \
			smartcalc/smartcalcview.cpp \
			smartcalc/plotview.cpp \
			smartcalc/smartcalccontroller.cpp \
			smartcalc/smartcalcmodel.cpp

HEADERS = smartcalc/smartcalcview.h \
			smartcalc/plotview.h \
			smartcalc/smartcalccontroller.h \
			smartcalc/smartcalcmodel.h

all: install tests dvi

install:
	cd ./smartcalc; qmake
	cd ./smartcalc; make
	@mkdir $(HOME)/Desktop/Calculator/
	@cp -rf smartcalc/calc.app $(HOME)/Desktop/Calculator/
	@$(OPEN) $(HOME)/Desktop/Calculator/calc.app
	make clean

run:
	@$(OPEN) $(HOME)/Desktop/Calculator/calc.app

clean:
	rm -rf smartcalc/calc.app smartcalc/moc_*  smartcalc/Makefile smartcalc/calc.pro.user smartcalc/.qmake.stash
	rm -rf *.o *.gcno *.gcda *.gcov tests.info report gcov_rep
	rm -rf SmartCalc.tgz smartcalc/.qmake.stash tests smartcalc/*.o

uninstall:
	rm -rf $(HOME)/Desktop/Calculator/

tests: clean
	$(GCC) test.cpp smartcalc/smartcalcmodel.cpp $(FLAGS) -o tests
	./tests

dvi:
	@$(OPEN) SmartCalc.html

dist:
	tar -czvf SmartCalc.tgz smartcalc images test.cpp Makefile SmartCalc.html

gcov_report: clean
	$(GCC) $(GCOV) test.cpp  smartcalc/smartcalcmodel.cpp $(FLAGS) -o gcov_rep
	./gcov_rep
	lcov -t "gcov_rep" --no-external --output-file=coverag.info --capture --directory .
	genhtml -o ./report coverag.info
	rm -rf *.gcda *.gcno *.info

code_style:
	clang-format -n smartcalc/*.cpp smartcalc/*.h

cppcheck:
	cppcheck --suppress=missingIncludeSystem --suppress=unknownMacro --std=c++17 --language=c++ $(SOURCES) $(HEADERS)

leaks: tests
	leaks -atExit -- ./tests
