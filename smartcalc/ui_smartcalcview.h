/********************************************************************************
** Form generated from reading UI file 'smartcalcview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTCALCVIEW_H
#define UI_SMARTCALCVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartCalcView {
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_minus;
    QPushButton *button_plus;
    QPushButton *button_tan;
    QPushButton *button_equal;
    QPushButton *button_divide;
    QPushButton *button_asin;
    QPushButton *button_cos;
    QPushButton *button_multiply;
    QPushButton *button_mod;
    QPushButton *button_ln;
    QPushButton *button_clean_one;
    QPushButton *button_graph;
    QPushButton *button_pow;
    QPushButton *button_8;
    QPushButton *button_2;
    QPushButton *button_atan;
    QPushButton *button_7;
    QPushButton *button_sqrt;
    QPushButton *button_sin;
    QPushButton *button_1;
    QPushButton *button_close_brace;
    QPushButton *button_0;
    QPushButton *button_4;
    QPushButton *button_6;
    QPushButton *button_9;
    QPushButton *button_point;
    QPushButton *button_log;
    QPushButton *button_open_brace;
    QPushButton *button_acos;
    QPushButton *button_5;
    QPushButton *button_3;
    QPushButton *button_clean_all;
    QPushButton *button_exp;
    QFrame *frame_3;
    QPushButton *button_x;
    QLineEdit *lineEdit;
    QWidget *CreditCalc;
    QLabel *label_2;
    QFrame *frame;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *interest_rate;
    QLabel *label_3;
    QSpinBox *year;
    QLabel *label_11;
    QComboBox *time_type;
    QComboBox *credit_type;
    QLabel *label_4;
    QFrame *frame_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *overpayment;
    QLabel *total_payment;
    QLabel *month_payment;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *CalculateCredit;
    QLineEdit *credit_amount;
    QWidget *tab_3;

    void setupUi(QMainWindow *MainWindow) {
        if (MainWindow->objectName().isEmpty()) MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(492, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 491, 451));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 476, 51));
        label->setStyleSheet(
            QString::fromUtf8("QLabel {\n"
                              "	background-color: white;\n"
                              "	color: black;\n"
                              "	qproperty-aligment: 'AlignVCenter | AlignRight';\n"
                              "	border: 1px solid gray;\n"
                              "}\n"
                              "\n"
                              ""));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 50, 478, 361));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_minus = new QPushButton(gridLayoutWidget);
        button_minus->setObjectName(QString::fromUtf8("button_minus"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_minus->sizePolicy().hasHeightForWidth());
        button_minus->setSizePolicy(sizePolicy);
        button_minus->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(255, 151, 57);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#FF7832, stop: 1 #FF9739);\n"
                              "}"));

        gridLayout->addWidget(button_minus, 2, 5, 1, 1);

        button_plus = new QPushButton(gridLayoutWidget);
        button_plus->setObjectName(QString::fromUtf8("button_plus"));
        sizePolicy.setHeightForWidth(button_plus->sizePolicy().hasHeightForWidth());
        button_plus->setSizePolicy(sizePolicy);
        button_plus->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(255, 151, 57);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#FF7832, stop: 1 #FF9739);\n"
                              "}"));

        gridLayout->addWidget(button_plus, 1, 5, 1, 1);

        button_tan = new QPushButton(gridLayoutWidget);
        button_tan->setObjectName(QString::fromUtf8("button_tan"));
        sizePolicy.setHeightForWidth(button_tan->sizePolicy().hasHeightForWidth());
        button_tan->setSizePolicy(sizePolicy);
        button_tan->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(128, 128, 128);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#999999, stop: 1 #999999);\n"
                              "}"));

        gridLayout->addWidget(button_tan, 4, 0, 1, 1);

        button_equal = new QPushButton(gridLayoutWidget);
        button_equal->setObjectName(QString::fromUtf8("button_equal"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_equal->sizePolicy().hasHeightForWidth());
        button_equal->setSizePolicy(sizePolicy1);
        button_equal->setMinimumSize(QSize(70, 0));
        button_equal->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: red;\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#FF7832, stop: 1 #FF9739);\n"
                              "}"));

        gridLayout->addWidget(button_equal, 4, 4, 3, 1);

        button_divide = new QPushButton(gridLayoutWidget);
        button_divide->setObjectName(QString::fromUtf8("button_divide"));
        sizePolicy.setHeightForWidth(button_divide->sizePolicy().hasHeightForWidth());
        button_divide->setSizePolicy(sizePolicy);
        button_divide->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(255, 151, 57);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#FF7832, stop: 1 #FF9739);\n"
                              "}"));

        gridLayout->addWidget(button_divide, 4, 5, 1, 1);

        button_asin = new QPushButton(gridLayoutWidget);
        button_asin->setObjectName(QString::fromUtf8("button_asin"));
        sizePolicy.setHeightForWidth(button_asin->sizePolicy().hasHeightForWidth());
        button_asin->setSizePolicy(sizePolicy);
        button_asin->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(128, 128, 128);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#999999, stop: 1 #999999);\n"
                              "}"));

        gridLayout->addWidget(button_asin, 3, 1, 1, 1);

        button_cos = new QPushButton(gridLayoutWidget);
        button_cos->setObjectName(QString::fromUtf8("button_cos"));
        sizePolicy.setHeightForWidth(button_cos->sizePolicy().hasHeightForWidth());
        button_cos->setSizePolicy(sizePolicy);
        button_cos->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(128, 128, 128);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#999999, stop: 1 #999999);\n"
                              "}"));

        gridLayout->addWidget(button_cos, 2, 0, 1, 1);

        button_multiply = new QPushButton(gridLayoutWidget);
        button_multiply->setObjectName(QString::fromUtf8("button_multiply"));
        sizePolicy.setHeightForWidth(button_multiply->sizePolicy().hasHeightForWidth());
        button_multiply->setSizePolicy(sizePolicy);
        button_multiply->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(255, 151, 57);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#FF7832, stop: 1 #FF9739);\n"
                              "}"));

        gridLayout->addWidget(button_multiply, 3, 5, 1, 1);

        button_mod = new QPushButton(gridLayoutWidget);
        button_mod->setObjectName(QString::fromUtf8("button_mod"));
        sizePolicy1.setHeightForWidth(button_mod->sizePolicy().hasHeightForWidth());
        button_mod->setSizePolicy(sizePolicy1);
        button_mod->setMinimumSize(QSize(70, 0));
        button_mod->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(255, 151, 57);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#FF0000, stop: 1 #FF0000);\n"
                              "}"));

        gridLayout->addWidget(button_mod, 0, 5, 1, 1);

        button_ln = new QPushButton(gridLayoutWidget);
        button_ln->setObjectName(QString::fromUtf8("button_ln"));
        sizePolicy.setHeightForWidth(button_ln->sizePolicy().hasHeightForWidth());
        button_ln->setSizePolicy(sizePolicy);
        button_ln->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(128, 128, 128);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#999999, stop: 1 #999999);\n"
                              "}"));

        gridLayout->addWidget(button_ln, 1, 0, 1, 1);

        button_clean_one = new QPushButton(gridLayoutWidget);
        button_clean_one->setObjectName(QString::fromUtf8("button_clean_one"));
        sizePolicy1.setHeightForWidth(button_clean_one->sizePolicy().hasHeightForWidth());
        button_clean_one->setSizePolicy(sizePolicy1);
        button_clean_one->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_clean_one, 6, 2, 1, 1);

        button_graph = new QPushButton(gridLayoutWidget);
        button_graph->setObjectName(QString::fromUtf8("button_graph"));
        sizePolicy1.setHeightForWidth(button_graph->sizePolicy().hasHeightForWidth());
        button_graph->setSizePolicy(sizePolicy1);
        button_graph->setMinimumSize(QSize(150, 0));
        button_graph->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: green;\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#FF7832, stop: 1 #FF9739);\n"
                              "}"));

        gridLayout->addWidget(button_graph, 5, 2, 1, 2);

        button_pow = new QPushButton(gridLayoutWidget);
        button_pow->setObjectName(QString::fromUtf8("button_pow"));
        sizePolicy.setHeightForWidth(button_pow->sizePolicy().hasHeightForWidth());
        button_pow->setSizePolicy(sizePolicy);
        button_pow->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(255, 151, 57);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#FF7832, stop: 1 #FF9739);\n"
                              "}"));

        gridLayout->addWidget(button_pow, 0, 4, 1, 1);

        button_8 = new QPushButton(gridLayoutWidget);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        sizePolicy1.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy1);
        button_8->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_8, 3, 3, 1, 1);

        button_2 = new QPushButton(gridLayoutWidget);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        sizePolicy1.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy1);
        button_2->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_2, 1, 3, 1, 1);

        button_atan = new QPushButton(gridLayoutWidget);
        button_atan->setObjectName(QString::fromUtf8("button_atan"));
        sizePolicy.setHeightForWidth(button_atan->sizePolicy().hasHeightForWidth());
        button_atan->setSizePolicy(sizePolicy);
        button_atan->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(128, 128, 128);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#999999, stop: 1 #999999);\n"
                              "}"));

        gridLayout->addWidget(button_atan, 4, 1, 1, 1);

        button_7 = new QPushButton(gridLayoutWidget);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        sizePolicy1.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy1);
        button_7->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_7, 3, 2, 1, 1);

        button_sqrt = new QPushButton(gridLayoutWidget);
        button_sqrt->setObjectName(QString::fromUtf8("button_sqrt"));
        sizePolicy1.setHeightForWidth(button_sqrt->sizePolicy().hasHeightForWidth());
        button_sqrt->setSizePolicy(sizePolicy1);
        button_sqrt->setMinimumSize(QSize(70, 0));
        button_sqrt->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(128, 128, 128);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#999999, stop: 1 #999999);\n"
                              "}"));

        gridLayout->addWidget(button_sqrt, 0, 0, 1, 1);

        button_sin = new QPushButton(gridLayoutWidget);
        button_sin->setObjectName(QString::fromUtf8("button_sin"));
        sizePolicy.setHeightForWidth(button_sin->sizePolicy().hasHeightForWidth());
        button_sin->setSizePolicy(sizePolicy);
        button_sin->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(128, 128, 128);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#999999, stop: 1 #999999);\n"
                              "}"));

        gridLayout->addWidget(button_sin, 3, 0, 1, 1);

        button_1 = new QPushButton(gridLayoutWidget);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        sizePolicy1.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy1);
        button_1->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_1, 1, 2, 1, 1);

        button_close_brace = new QPushButton(gridLayoutWidget);
        button_close_brace->setObjectName(QString::fromUtf8("button_close_brace"));
        sizePolicy1.setHeightForWidth(button_close_brace->sizePolicy().hasHeightForWidth());
        button_close_brace->setSizePolicy(sizePolicy1);
        button_close_brace->setMinimumSize(QSize(70, 0));
        button_close_brace->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(button_close_brace, 0, 3, 1, 1);

        button_0 = new QPushButton(gridLayoutWidget);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        sizePolicy1.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy1);
        button_0->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_0, 4, 2, 1, 1);

        button_4 = new QPushButton(gridLayoutWidget);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        sizePolicy1.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy1);
        button_4->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_4, 2, 2, 1, 1);

        button_6 = new QPushButton(gridLayoutWidget);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        sizePolicy1.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy1);
        button_6->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_6, 2, 4, 1, 1);

        button_9 = new QPushButton(gridLayoutWidget);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        sizePolicy1.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy1);
        button_9->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_9, 3, 4, 1, 1);

        button_point = new QPushButton(gridLayoutWidget);
        button_point->setObjectName(QString::fromUtf8("button_point"));
        sizePolicy1.setHeightForWidth(button_point->sizePolicy().hasHeightForWidth());
        button_point->setSizePolicy(sizePolicy1);
        button_point->setMinimumSize(QSize(70, 0));
        button_point->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	font-weight: bold;\n"
                              "}"));

        gridLayout->addWidget(button_point, 4, 3, 1, 1);

        button_log = new QPushButton(gridLayoutWidget);
        button_log->setObjectName(QString::fromUtf8("button_log"));
        sizePolicy1.setHeightForWidth(button_log->sizePolicy().hasHeightForWidth());
        button_log->setSizePolicy(sizePolicy1);
        button_log->setMinimumSize(QSize(70, 0));
        button_log->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(128, 128, 128);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#999999, stop: 1 #999999);\n"
                              "}"));

        gridLayout->addWidget(button_log, 1, 1, 1, 1);

        button_open_brace = new QPushButton(gridLayoutWidget);
        button_open_brace->setObjectName(QString::fromUtf8("button_open_brace"));
        sizePolicy1.setHeightForWidth(button_open_brace->sizePolicy().hasHeightForWidth());
        button_open_brace->setSizePolicy(sizePolicy1);
        button_open_brace->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_open_brace, 0, 2, 1, 1);

        button_acos = new QPushButton(gridLayoutWidget);
        button_acos->setObjectName(QString::fromUtf8("button_acos"));
        sizePolicy.setHeightForWidth(button_acos->sizePolicy().hasHeightForWidth());
        button_acos->setSizePolicy(sizePolicy);
        button_acos->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(128, 128, 128);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#999999, stop: 1 #999999);\n"
                              "}"));

        gridLayout->addWidget(button_acos, 2, 1, 1, 1);

        button_5 = new QPushButton(gridLayoutWidget);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        sizePolicy1.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy1);
        button_5->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_5, 2, 3, 1, 1);

        button_3 = new QPushButton(gridLayoutWidget);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        sizePolicy1.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy1);
        button_3->setMinimumSize(QSize(70, 0));

        gridLayout->addWidget(button_3, 1, 4, 1, 1);

        button_clean_all = new QPushButton(gridLayoutWidget);
        button_clean_all->setObjectName(QString::fromUtf8("button_clean_all"));
        sizePolicy1.setHeightForWidth(button_clean_all->sizePolicy().hasHeightForWidth());
        button_clean_all->setSizePolicy(sizePolicy1);
        button_clean_all->setMinimumSize(QSize(70, 0));
        button_clean_all->setMaximumSize(QSize(16777215, 16777215));
        button_clean_all->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(button_clean_all, 6, 3, 1, 1);

        button_exp = new QPushButton(gridLayoutWidget);
        button_exp->setObjectName(QString::fromUtf8("button_exp"));
        sizePolicy1.setHeightForWidth(button_exp->sizePolicy().hasHeightForWidth());
        button_exp->setSizePolicy(sizePolicy1);
        button_exp->setMinimumSize(QSize(70, 0));
        button_exp->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: rgb(128, 128, 128);\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#999999, stop: 1 #999999);\n"
                              "}"));

        gridLayout->addWidget(button_exp, 0, 1, 1, 1);

        frame_3 = new QFrame(gridLayoutWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        button_x = new QPushButton(frame_3);
        button_x->setObjectName(QString::fromUtf8("button_x"));
        button_x->setGeometry(QRect(10, 10, 121, 39));
        sizePolicy.setHeightForWidth(button_x->sizePolicy().hasHeightForWidth());
        button_x->setSizePolicy(sizePolicy);
        button_x->setStyleSheet(
            QString::fromUtf8("QPushButton {\n"
                              "	background-color: green;\n"
                              "	color: white;\n"
                              "	border: 1px solid gray;\n"
                              "	font-weight: bold;\n"
                              "}\n"
                              "QPushButton::pressed {\n"
                              "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
                              "#FF7832, stop: 1 #FF9739);\n"
                              "}"));
        lineEdit = new QLineEdit(frame_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(10, 50, 121, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setMaximumSize(QSize(16777215, 16777215));
        lineEdit->setSizeIncrement(QSize(100, 0));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid gray;"));
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(frame_3, 5, 0, 3, 2);

        tabWidget->addTab(tab, QString());
        CreditCalc = new QWidget();
        CreditCalc->setObjectName(QString::fromUtf8("CreditCalc"));
        label_2 = new QLabel(CreditCalc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 10, 111, 20));
        frame = new QFrame(CreditCalc);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(110, 70, 251, 121));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        QFont font;
        font.setStrikeOut(false);
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);
        gridLayoutWidget_3 = new QWidget(frame);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 0, 251, 123));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        interest_rate = new QDoubleSpinBox(gridLayoutWidget_3);
        interest_rate->setObjectName(QString::fromUtf8("interest_rate"));
        interest_rate->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
        interest_rate->setMinimum(0.010000000000000);
        interest_rate->setMaximum(100.000000000000000);
        interest_rate->setSingleStep(0.100000000000000);
        interest_rate->setValue(7.500000000000000);

        gridLayout_3->addWidget(interest_rate, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        year = new QSpinBox(gridLayoutWidget_3);
        year->setObjectName(QString::fromUtf8("year"));
        year->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
        year->setMaximum(360);
        year->setValue(1);

        gridLayout_3->addWidget(year, 0, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

        gridLayout_3->addWidget(label_11, 2, 0, 1, 1);

        time_type = new QComboBox(gridLayoutWidget_3);
        time_type->addItem(QString());
        time_type->addItem(QString());
        time_type->setObjectName(QString::fromUtf8("time_type"));

        gridLayout_3->addWidget(time_type, 0, 2, 1, 1);

        credit_type = new QComboBox(gridLayoutWidget_3);
        credit_type->addItem(QString());
        credit_type->addItem(QString());
        credit_type->setObjectName(QString::fromUtf8("credit_type"));

        gridLayout_3->addWidget(credit_type, 2, 1, 1, 2);

        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font-weight: bold;"));
        label_4->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        frame_2 = new QFrame(CreditCalc);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 230, 441, 121));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(2);
        gridLayoutWidget_2 = new QWidget(frame_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 421, 104));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        overpayment = new QLabel(gridLayoutWidget_2);
        overpayment->setObjectName(QString::fromUtf8("overpayment"));
        overpayment->setStyleSheet(
            QString::fromUtf8("QLabel {\n"
                              "	background-color: white;\n"
                              "	color: black;\n"
                              "	qproperty-aligment: 'AlignVCenter | AlignRight';\n"
                              "	border: 1px solid gray;\n"
                              "}\n"
                              ""));

        gridLayout_2->addWidget(overpayment, 1, 1, 1, 1);

        total_payment = new QLabel(gridLayoutWidget_2);
        total_payment->setObjectName(QString::fromUtf8("total_payment"));
        total_payment->setStyleSheet(
            QString::fromUtf8("QLabel {\n"
                              "	background-color: white;\n"
                              "	color: black;\n"
                              "	qproperty-aligment: 'AlignVCenter | AlignRight';\n"
                              "	border: 1px solid gray;\n"
                              "}\n"
                              ""));

        gridLayout_2->addWidget(total_payment, 2, 1, 1, 1);

        month_payment = new QLabel(gridLayoutWidget_2);
        month_payment->setObjectName(QString::fromUtf8("month_payment"));
        month_payment->setStyleSheet(
            QString::fromUtf8("QLabel {\n"
                              "	background-color: white;\n"
                              "	color: black;\n"
                              "	qproperty-aligment: 'AlignVCenter | AlignRight';\n"
                              "	border: 1px solid gray;\n"
                              "}\n"
                              ""));

        gridLayout_2->addWidget(month_payment, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        CalculateCredit = new QPushButton(CreditCalc);
        CalculateCredit->setObjectName(QString::fromUtf8("CalculateCredit"));
        CalculateCredit->setGeometry(QRect(200, 200, 100, 32));
        credit_amount = new QLineEdit(CreditCalc);
        credit_amount->setObjectName(QString::fromUtf8("credit_amount"));
        credit_amount->setGeometry(QRect(160, 30, 151, 31));
        tabWidget->addTab(CreditCalc, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);

        QMetaObject::connectSlotsByName(MainWindow);
    }  // setupUi

    void retranslateUi(QMainWindow *MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_tan->setText(QCoreApplication::translate("MainWindow", "tan(", nullptr));
        button_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_asin->setText(QCoreApplication::translate("MainWindow", "asin(", nullptr));
        button_cos->setText(QCoreApplication::translate("MainWindow", "cos(", nullptr));
        button_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        button_ln->setText(QCoreApplication::translate("MainWindow", "ln(", nullptr));
        button_clean_one->setText(QCoreApplication::translate("MainWindow", "Clear One", nullptr));
        button_graph->setText(QCoreApplication::translate("MainWindow",
                                                          "Build \n"
                                                          "a graph",
                                                          nullptr));
        button_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_atan->setText(QCoreApplication::translate("MainWindow", "atan(", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt(", nullptr));
        button_sin->setText(QCoreApplication::translate("MainWindow", "sin(", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_close_brace->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        button_log->setText(QCoreApplication::translate("MainWindow", "log(", nullptr));
        button_open_brace->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        button_acos->setText(QCoreApplication::translate("MainWindow", "acos(", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_clean_all->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        button_exp->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
        button_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab),
                              QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        label_2->setText(
            QCoreApplication::translate("MainWindow",
                                        "\320\241\321\203\320\274\320\274\320\260 "
                                        "\320\272\321\200\320\265\320\264\320\270\321\202\320\260:",
                                        nullptr));
        label_3->setText(
            QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277", nullptr));
        time_type->setItemText(0, QCoreApplication::translate("MainWindow", "years", nullptr));
        time_type->setItemText(1, QCoreApplication::translate("MainWindow", "months", nullptr));

        credit_type->setItemText(
            0, QCoreApplication::translate(
                   "MainWindow",
                   "\320\260\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271",
                   nullptr));
        credit_type->setItemText(
            1, QCoreApplication::translate(
                   "MainWindow",
                   "\320\264\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200"
                   "\320\276\320\262\320\260\320\275\320\275\321\213\320\271",
                   nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "%:", nullptr));
        label_5->setText(QCoreApplication::translate(
            "MainWindow",
            "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 "
            "\320\277\320\273\320\260\321\202\321\221\320\266:",
            nullptr));
        overpayment->setText(QString());
        total_payment->setText(QString());
        month_payment->setText(QString());
        label_6->setText(QCoreApplication::translate(
            "MainWindow",
            "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 "
            "\320\272\321\200\320\265\320\264\320\270\321\202\321\203:",
            nullptr));
        label_7->setText(
            QCoreApplication::translate("MainWindow",
                                        "\320\236\320\261\321\211\320\260\321\217 "
                                        "\320\262\321\213\320\277\320\273\320\260\321\202\320\260:",
                                        nullptr));
        CalculateCredit->setText(QCoreApplication::translate(
            "MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214",
            nullptr));
        credit_amount->setText(QCoreApplication::translate("MainWindow", "100000", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CreditCalc),
                              QCoreApplication::translate("MainWindow", "Credit Calc", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3),
                              QCoreApplication::translate("MainWindow", "Deposit Calc", nullptr));
    }  // retranslateUi
};

namespace Ui {
class SmartCalcView : public Ui_SmartCalcView {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_SMARTCALCVIEW_H
