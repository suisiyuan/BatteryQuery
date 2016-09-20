/********************************************************************************
** Form generated from reading UI file 'batteryquery.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERYQUERY_H
#define UI_BATTERYQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_BatteryQueryClass
{
public:
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionAbout;
    QAction *actionSave;
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QCustomPlot *customPlot;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *helpMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BatteryQueryClass)
    {
        if (BatteryQueryClass->objectName().isEmpty())
            BatteryQueryClass->setObjectName(QStringLiteral("BatteryQueryClass"));
        BatteryQueryClass->resize(844, 608);
        actionOpen = new QAction(BatteryQueryClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionClose = new QAction(BatteryQueryClass);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionAbout = new QAction(BatteryQueryClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSave = new QAction(BatteryQueryClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(BatteryQueryClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(BatteryQueryClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));

        verticalLayout->addWidget(customPlot);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        connectButton = new QPushButton(groupBox);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout->addWidget(connectButton);

        disconnectButton = new QPushButton(groupBox);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));
        disconnectButton->setEnabled(false);

        horizontalLayout->addWidget(disconnectButton);


        verticalLayout->addWidget(groupBox);

        BatteryQueryClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BatteryQueryClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 844, 23));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QStringLiteral("fileMenu"));
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName(QStringLiteral("helpMenu"));
        BatteryQueryClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BatteryQueryClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BatteryQueryClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BatteryQueryClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BatteryQueryClass->setStatusBar(statusBar);

        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(helpMenu->menuAction());
        fileMenu->addAction(actionOpen);
        fileMenu->addAction(actionClose);
        fileMenu->addAction(actionSave);
        fileMenu->addSeparator();
        fileMenu->addAction(actionExit);
        helpMenu->addAction(actionAbout);

        retranslateUi(BatteryQueryClass);

        QMetaObject::connectSlotsByName(BatteryQueryClass);
    } // setupUi

    void retranslateUi(QMainWindow *BatteryQueryClass)
    {
        BatteryQueryClass->setWindowTitle(QApplication::translate("BatteryQueryClass", "\351\222\273\345\255\224\347\224\265\350\247\206\342\200\224\342\200\224\347\224\265\351\207\217\346\237\245\350\257\242\350\275\257\344\273\266", 0));
        actionOpen->setText(QApplication::translate("BatteryQueryClass", "\346\211\223\345\274\200", 0));
        actionClose->setText(QApplication::translate("BatteryQueryClass", "\345\205\263\351\227\255", 0));
        actionAbout->setText(QApplication::translate("BatteryQueryClass", "\345\205\263\344\272\216", 0));
        actionSave->setText(QApplication::translate("BatteryQueryClass", "\345\217\246\345\255\230\344\270\272...", 0));
        actionExit->setText(QApplication::translate("BatteryQueryClass", "\351\200\200\345\207\272", 0));
        groupBox->setTitle(QString());
        connectButton->setText(QApplication::translate("BatteryQueryClass", "\350\277\236\346\216\245/\345\274\200\345\247\213", 0));
        disconnectButton->setText(QApplication::translate("BatteryQueryClass", "\346\226\255\345\274\200\350\277\236\346\216\245/\347\273\223\346\235\237", 0));
        fileMenu->setTitle(QApplication::translate("BatteryQueryClass", "\346\226\207\344\273\266", 0));
        helpMenu->setTitle(QApplication::translate("BatteryQueryClass", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class BatteryQueryClass: public Ui_BatteryQueryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERYQUERY_H
