/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jun 26 21:12:14 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_Parama;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *vallineEdit_1;
    QLineEdit *vallineEdit_2;
    QLineEdit *vallineEdit_3;
    QLineEdit *vallineEdit_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *unitlineEdit_1;
    QLineEdit *unitlineEdit_2;
    QLineEdit *unitlineEdit_3;
    QLineEdit *unitlineEdit_4;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *initFlineEdit;
    QLabel *label_4;
    QSpinBox *startxspinBox;
    QLabel *label_5;
    QSpinBox *startyspinBox;
    QLabel *label_6;
    QDoubleSpinBox *iniangledoubleSpinBox;
    QLabel *label_7;
    QDoubleSpinBox *angledoubleSpinBox;
    QLabel *label_8;
    QSpinBox *iterspinBox;
    QLabel *label_9;
    QSpinBox *lenspinBox;
    QPushButton *startpushButton;
    QWidget *tab_2;
    QPushButton *drawIFSpushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLineEdit *startxIFSlineEdit;
    QLabel *label_10;
    QLineEdit *startyIFSlineEdit;
    QLabel *label_11;
    QLineEdit *cxIFSlineEdit;
    QLabel *label_12;
    QLineEdit *cyIFSlineEdit;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1085, 790);
        actionSave_Parama = new QAction(MainWindow);
        actionSave_Parama->setObjectName(QString::fromUtf8("actionSave_Parama"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 211, 711));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 20, 181, 161));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 30, 101, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        vallineEdit_1 = new QLineEdit(layoutWidget);
        vallineEdit_1->setObjectName(QString::fromUtf8("vallineEdit_1"));

        verticalLayout_3->addWidget(vallineEdit_1);

        vallineEdit_2 = new QLineEdit(layoutWidget);
        vallineEdit_2->setObjectName(QString::fromUtf8("vallineEdit_2"));

        verticalLayout_3->addWidget(vallineEdit_2);

        vallineEdit_3 = new QLineEdit(layoutWidget);
        vallineEdit_3->setObjectName(QString::fromUtf8("vallineEdit_3"));

        verticalLayout_3->addWidget(vallineEdit_3);

        vallineEdit_4 = new QLineEdit(layoutWidget);
        vallineEdit_4->setObjectName(QString::fromUtf8("vallineEdit_4"));

        verticalLayout_3->addWidget(vallineEdit_4);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 29, 51, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        unitlineEdit_1 = new QLineEdit(layoutWidget1);
        unitlineEdit_1->setObjectName(QString::fromUtf8("unitlineEdit_1"));
        unitlineEdit_1->setReadOnly(false);

        verticalLayout_2->addWidget(unitlineEdit_1);

        unitlineEdit_2 = new QLineEdit(layoutWidget1);
        unitlineEdit_2->setObjectName(QString::fromUtf8("unitlineEdit_2"));

        verticalLayout_2->addWidget(unitlineEdit_2);

        unitlineEdit_3 = new QLineEdit(layoutWidget1);
        unitlineEdit_3->setObjectName(QString::fromUtf8("unitlineEdit_3"));

        verticalLayout_2->addWidget(unitlineEdit_3);

        unitlineEdit_4 = new QLineEdit(layoutWidget1);
        unitlineEdit_4->setObjectName(QString::fromUtf8("unitlineEdit_4"));

        verticalLayout_2->addWidget(unitlineEdit_4);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 190, 181, 341));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 161, 311));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        initFlineEdit = new QLineEdit(layoutWidget2);
        initFlineEdit->setObjectName(QString::fromUtf8("initFlineEdit"));

        verticalLayout->addWidget(initFlineEdit);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        startxspinBox = new QSpinBox(layoutWidget2);
        startxspinBox->setObjectName(QString::fromUtf8("startxspinBox"));
        startxspinBox->setMaximum(10000000);

        verticalLayout->addWidget(startxspinBox);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        startyspinBox = new QSpinBox(layoutWidget2);
        startyspinBox->setObjectName(QString::fromUtf8("startyspinBox"));
        startyspinBox->setMaximum(10000000);

        verticalLayout->addWidget(startyspinBox);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        iniangledoubleSpinBox = new QDoubleSpinBox(layoutWidget2);
        iniangledoubleSpinBox->setObjectName(QString::fromUtf8("iniangledoubleSpinBox"));
        iniangledoubleSpinBox->setMinimum(-1e+08);
        iniangledoubleSpinBox->setMaximum(1e+08);

        verticalLayout->addWidget(iniangledoubleSpinBox);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        angledoubleSpinBox = new QDoubleSpinBox(layoutWidget2);
        angledoubleSpinBox->setObjectName(QString::fromUtf8("angledoubleSpinBox"));
        angledoubleSpinBox->setMinimum(-1e+07);
        angledoubleSpinBox->setMaximum(1e+08);

        verticalLayout->addWidget(angledoubleSpinBox);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        iterspinBox = new QSpinBox(layoutWidget2);
        iterspinBox->setObjectName(QString::fromUtf8("iterspinBox"));

        verticalLayout->addWidget(iterspinBox);

        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        lenspinBox = new QSpinBox(layoutWidget2);
        lenspinBox->setObjectName(QString::fromUtf8("lenspinBox"));

        verticalLayout->addWidget(lenspinBox);

        startpushButton = new QPushButton(tab);
        startpushButton->setObjectName(QString::fromUtf8("startpushButton"));
        startpushButton->setGeometry(QRect(40, 590, 91, 41));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        drawIFSpushButton = new QPushButton(tab_2);
        drawIFSpushButton->setObjectName(QString::fromUtf8("drawIFSpushButton"));
        drawIFSpushButton->setGeometry(QRect(30, 300, 91, 41));
        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 50, 135, 172));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        startxIFSlineEdit = new QLineEdit(widget);
        startxIFSlineEdit->setObjectName(QString::fromUtf8("startxIFSlineEdit"));

        verticalLayout_4->addWidget(startxIFSlineEdit);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_4->addWidget(label_10);

        startyIFSlineEdit = new QLineEdit(widget);
        startyIFSlineEdit->setObjectName(QString::fromUtf8("startyIFSlineEdit"));

        verticalLayout_4->addWidget(startyIFSlineEdit);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        cxIFSlineEdit = new QLineEdit(widget);
        cxIFSlineEdit->setObjectName(QString::fromUtf8("cxIFSlineEdit"));

        verticalLayout_4->addWidget(cxIFSlineEdit);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        cyIFSlineEdit = new QLineEdit(widget);
        cyIFSlineEdit->setObjectName(QString::fromUtf8("cyIFSlineEdit"));

        verticalLayout_4->addWidget(cyIFSlineEdit);

        tabWidget->addTab(tab_2, QString());
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(250, 40, 800, 600));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1085, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(actionSave_Parama);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionSave_Parama->setText(QApplication::translate("MainWindow", "Save Param", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Unit", 0, QApplication::UnicodeUTF8));
        unitlineEdit_1->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Param", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Init Val", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "StartX", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "StartY", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "InitAngle", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Angle", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Iter times", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Draw Len", 0, QApplication::UnicodeUTF8));
        startpushButton->setText(QApplication::translate("MainWindow", "Draw", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "LS", 0, QApplication::UnicodeUTF8));
        drawIFSpushButton->setText(QApplication::translate("MainWindow", "IFS_Draw", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "StartX", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "StartY", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "CX", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "CY", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "IFS", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
