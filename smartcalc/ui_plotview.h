/********************************************************************************
** Form generated from reading UI file 'plotview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTVIEW_H
#define UI_PLOTVIEW_H

#include <qcustomplot/qcustomplot.h>

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Plot {
public:
    QCustomPlot *graph;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *xmin;
    QLabel *label_2;
    QSpinBox *xmax;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *ymin;
    QLabel *label_4;
    QSpinBox *ymax;
    QPushButton *pushButton;
    QLabel *message;
    QLabel *equation;

    void setupUi(QDialog *Plot) {
        if (Plot->objectName().isEmpty()) Plot->setObjectName(QString::fromUtf8("Plot"));
        Plot->resize(500, 600);
        Plot->setMinimumSize(QSize(500, 600));
        Plot->setMaximumSize(QSize(500, 600));
        graph = new QCustomPlot(Plot);
        graph->setObjectName(QString::fromUtf8("graph"));
        graph->setGeometry(QRect(0, 30, 500, 500));
        horizontalLayoutWidget = new QWidget(Plot);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 520, 211, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        xmin = new QSpinBox(horizontalLayoutWidget);
        xmin->setObjectName(QString::fromUtf8("xmin"));
        xmin->setMinimum(-500);
        xmin->setMaximum(500);
        xmin->setValue(-10);

        horizontalLayout->addWidget(xmin);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        xmax = new QSpinBox(horizontalLayoutWidget);
        xmax->setObjectName(QString::fromUtf8("xmax"));
        xmax->setMinimum(-500);
        xmax->setMaximum(500);
        xmax->setValue(10);

        horizontalLayout->addWidget(xmax);

        horizontalLayoutWidget_2 = new QWidget(Plot);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 560, 211, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        ymin = new QSpinBox(horizontalLayoutWidget_2);
        ymin->setObjectName(QString::fromUtf8("ymin"));
        ymin->setMinimum(-500);
        ymin->setMaximum(500);
        ymin->setValue(-10);

        horizontalLayout_2->addWidget(ymin);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        ymax = new QSpinBox(horizontalLayoutWidget_2);
        ymax->setObjectName(QString::fromUtf8("ymax"));
        ymax->setMinimum(-500);
        ymax->setMaximum(500);
        ymax->setValue(10);

        horizontalLayout_2->addWidget(ymax);

        pushButton = new QPushButton(Plot);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 530, 74, 32));
        message = new QLabel(Plot);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(250, 560, 221, 31));
        message->setStyleSheet(
            QString::fromUtf8("background-color: white;\n"
                              "color: black;"));
        equation = new QLabel(Plot);
        equation->setObjectName(QString::fromUtf8("equation"));
        equation->setGeometry(QRect(90, 0, 321, 20));
        equation->setStyleSheet(
            QString::fromUtf8("background-color: white;\n"
                              "color: black;\n"
                              "border: 1px solid gray;"));
        equation->setAlignment(Qt::AlignCenter);

        retranslateUi(Plot);

        QMetaObject::connectSlotsByName(Plot);
    }  // setupUi

    void retranslateUi(QDialog *Plot) {
        Plot->setWindowTitle(QCoreApplication::translate("Plot", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Plot", " X min", nullptr));
        label_2->setText(QCoreApplication::translate("Plot", "X max", nullptr));
        label_3->setText(QCoreApplication::translate("Plot", "Y min", nullptr));
        label_4->setText(QCoreApplication::translate("Plot", "Y max", nullptr));
        pushButton->setText(QCoreApplication::translate("Plot", "Update", nullptr));
        message->setText(QString());
        equation->setText(QString());
    }  // retranslateUi
};

namespace Ui {
class Plot : public Ui_Plot {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_PLOTVIEW_H
