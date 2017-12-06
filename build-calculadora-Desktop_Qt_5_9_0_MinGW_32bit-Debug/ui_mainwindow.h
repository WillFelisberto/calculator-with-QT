/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *Result;
    QPushButton *Sum;
    QLabel *label_2;
    QDoubleSpinBox *n2;
    QLabel *label_3;
    QPushButton *Subtraction;
    QLabel *label;
    QPushButton *Division;
    QDoubleSpinBox *n1;
    QPushButton *Multiplication;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(450, 257);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QLatin1String("background-image: url(:/myfiles/images/back.png);\n"
"\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 332, 96));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Result = new QLabel(widget);
        Result->setObjectName(QStringLiteral("Result"));

        gridLayout_2->addWidget(Result, 3, 2, 1, 1);

        Sum = new QPushButton(widget);
        Sum->setObjectName(QStringLiteral("Sum"));

        gridLayout_2->addWidget(Sum, 2, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        n2 = new QDoubleSpinBox(widget);
        n2->setObjectName(QStringLiteral("n2"));
        n2->setMinimum(-99999);
        n2->setMaximum(99999);

        gridLayout_2->addWidget(n2, 1, 1, 1, 3);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        Subtraction = new QPushButton(widget);
        Subtraction->setObjectName(QStringLiteral("Subtraction"));

        gridLayout_2->addWidget(Subtraction, 2, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        Division = new QPushButton(widget);
        Division->setObjectName(QStringLiteral("Division"));

        gridLayout_2->addWidget(Division, 2, 3, 1, 1);

        n1 = new QDoubleSpinBox(widget);
        n1->setObjectName(QStringLiteral("n1"));
        n1->setMinimum(-99999);
        n1->setMaximum(99999);

        gridLayout_2->addWidget(n1, 0, 1, 1, 3);

        Multiplication = new QPushButton(widget);
        Multiplication->setObjectName(QStringLiteral("Multiplication"));

        gridLayout_2->addWidget(Multiplication, 2, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 450, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(n1, n2);
        QWidget::setTabOrder(n2, Sum);
        QWidget::setTabOrder(Sum, Subtraction);
        QWidget::setTabOrder(Subtraction, Multiplication);
        QWidget::setTabOrder(Multiplication, Division);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Result->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        Sum->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Numero 2", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Resultado", Q_NULLPTR));
        Subtraction->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Numero 1", Q_NULLPTR));
        Division->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        Multiplication->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
