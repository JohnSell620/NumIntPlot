/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Window;
    QAction *actionSave;
    QAction *actionExit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QLineEdit *lineEdit_6;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QWidget *tab_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_4;
    QCustomPlot *customPlot;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_16;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_20;
    QWidget *tab_3;
    QGraphicsView *graphicsView;
    QSlider *verticalSlider;
    QSlider *horizontalSlider;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(828, 519);
        actionNew_Window = new QAction(MainWindow);
        actionNew_Window->setObjectName(QString::fromUtf8("actionNew_Window"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 821, 451));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 180, 401, 27));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_6->addWidget(pushButton);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);

        layoutWidget_2 = new QWidget(tab);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 781, 153));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_7 = new QLineEdit(layoutWidget_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_2->addWidget(lineEdit_7);

        lineEdit_4 = new QLineEdit(layoutWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_2->addWidget(lineEdit_4);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(41, 81));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/intsymb.jpg")));

        horizontalLayout_4->addWidget(label_3);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(41, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/intsymb.jpg")));

        horizontalLayout_4->addWidget(label_2);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(41, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/intsymb.jpg")));

        horizontalLayout_4->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_8 = new QLineEdit(layoutWidget_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_3->addWidget(lineEdit_8);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_3->addWidget(lineEdit_5);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(341, 0));
        lineEdit->setMaxLength(32767);

        horizontalLayout->addWidget(lineEdit);

        comboBox = new QComboBox(layoutWidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(51, 0));
        comboBox->setMaximumSize(QSize(51, 16777215));

        horizontalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(layoutWidget_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(51, 0));
        comboBox_2->setMaximumSize(QSize(51, 16777215));

        horizontalLayout->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(layoutWidget_2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(51, 0));
        comboBox_3->setMaximumSize(QSize(51, 16777215));

        horizontalLayout->addWidget(comboBox_3);


        horizontalLayout_5->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 491, 331));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 350, 80, 25));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(520, 10, 281, 331));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        customPlot = new QCustomPlot(tab_4);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(100, 130, 561, 281));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(420, 30, 75, 23));
        lineEdit_16 = new QLineEdit(tab_4);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(110, 30, 231, 20));
        layoutWidget1 = new QWidget(tab_4);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 60, 161, 51));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEdit_17 = new QLineEdit(layoutWidget1);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));

        verticalLayout_3->addWidget(lineEdit_17);

        lineEdit_18 = new QLineEdit(layoutWidget1);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));

        verticalLayout_3->addWidget(lineEdit_18);


        horizontalLayout_9->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEdit_19 = new QLineEdit(layoutWidget1);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));

        verticalLayout_4->addWidget(lineEdit_19);

        lineEdit_20 = new QLineEdit(layoutWidget1);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));

        verticalLayout_4->addWidget(lineEdit_20);


        horizontalLayout_9->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        graphicsView = new QGraphicsView(tab_3);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(60, 100, 631, 291));
        verticalSlider = new QSlider(tab_3);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(780, 110, 22, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        horizontalSlider = new QSlider(tab_3);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(590, 60, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit_9 = new QLineEdit(tab_3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(60, 10, 281, 20));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 10, 75, 23));
        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 40, 221, 52));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lineEdit_13 = new QLineEdit(layoutWidget2);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        horizontalLayout_8->addWidget(lineEdit_13);

        lineEdit_14 = new QLineEdit(layoutWidget2);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        horizontalLayout_8->addWidget(lineEdit_14);

        lineEdit_15 = new QLineEdit(layoutWidget2);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));

        horizontalLayout_8->addWidget(lineEdit_15);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lineEdit_10 = new QLineEdit(layoutWidget2);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        horizontalLayout_7->addWidget(lineEdit_10);

        lineEdit_11 = new QLineEdit(layoutWidget2);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));

        horizontalLayout_7->addWidget(lineEdit_11);

        lineEdit_12 = new QLineEdit(layoutWidget2);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));

        horizontalLayout_7->addWidget(lineEdit_12);


        verticalLayout_2->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 828, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_Window);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "NumInt", nullptr));
        actionNew_Window->setText(QApplication::translate("MainWindow", "Command History", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "integrate", nullptr));
        lineEdit_7->setText(QApplication::translate("MainWindow", "1", nullptr));
        lineEdit_4->setText(QApplication::translate("MainWindow", "pi/4", nullptr));
        lineEdit_2->setText(QApplication::translate("MainWindow", "sin(x)", nullptr));
        label_3->setText(QString());
        label_2->setText(QString());
        label->setText(QString());
        lineEdit_8->setText(QApplication::translate("MainWindow", "0", nullptr));
        lineEdit_5->setText(QApplication::translate("MainWindow", "0", nullptr));
        lineEdit_3->setText(QApplication::translate("MainWindow", "0", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "(2*y*sin(x)+(cos(x))^2)/(sqrt(1-y^2))", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "dy", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "dx", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "dz", nullptr));

        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "dx", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "dy", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("MainWindow", "dz", nullptr));
        comboBox_2->setItemText(3, QString());

        comboBox_3->setItemText(0, QApplication::translate("MainWindow", "dz", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("MainWindow", "dx", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("MainWindow", "dy", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Integration", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Run", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Matrices", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Plot", nullptr));
        lineEdit_16->setInputMask(QApplication::translate("MainWindow", "e\\xpressio\\n", nullptr));
        lineEdit_17->setInputMask(QApplication::translate("MainWindow", "upper \\x limit", nullptr));
        lineEdit_18->setInputMask(QApplication::translate("MainWindow", "lower \\x limit", nullptr));
        lineEdit_19->setInputMask(QApplication::translate("MainWindow", "upper y limit", nullptr));
        lineEdit_20->setInputMask(QApplication::translate("MainWindow", "lower y limit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "2-D Plotting", nullptr));
        lineEdit_9->setInputMask(QApplication::translate("MainWindow", "e\\xpressio\\n", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Plot", nullptr));
        lineEdit_13->setInputMask(QApplication::translate("MainWindow", "upper \\x limit", nullptr));
        lineEdit_14->setInputMask(QApplication::translate("MainWindow", "upper \\y limit", nullptr));
        lineEdit_15->setInputMask(QApplication::translate("MainWindow", "upper z limit", nullptr));
        lineEdit_10->setInputMask(QApplication::translate("MainWindow", "lower \\x limit", nullptr));
        lineEdit_11->setInputMask(QApplication::translate("MainWindow", "lower \\y limit", nullptr));
        lineEdit_12->setInputMask(QApplication::translate("MainWindow", "lower \\z limit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "3-D Plotting", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "Options", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
