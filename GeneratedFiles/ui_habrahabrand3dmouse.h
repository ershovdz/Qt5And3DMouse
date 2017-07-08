/********************************************************************************
** Form generated from reading UI file 'habrahabrand3dmouse.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HABRAHABRAND3DMOUSE_H
#define UI_HABRAHABRAND3DMOUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HabrahabrAnd3DMouseClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HabrahabrAnd3DMouseClass)
    {
        if (HabrahabrAnd3DMouseClass->objectName().isEmpty())
            HabrahabrAnd3DMouseClass->setObjectName(QStringLiteral("HabrahabrAnd3DMouseClass"));
        HabrahabrAnd3DMouseClass->resize(600, 400);
        menuBar = new QMenuBar(HabrahabrAnd3DMouseClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        HabrahabrAnd3DMouseClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HabrahabrAnd3DMouseClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HabrahabrAnd3DMouseClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(HabrahabrAnd3DMouseClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        HabrahabrAnd3DMouseClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(HabrahabrAnd3DMouseClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HabrahabrAnd3DMouseClass->setStatusBar(statusBar);

        retranslateUi(HabrahabrAnd3DMouseClass);

        QMetaObject::connectSlotsByName(HabrahabrAnd3DMouseClass);
    } // setupUi

    void retranslateUi(QMainWindow *HabrahabrAnd3DMouseClass)
    {
        HabrahabrAnd3DMouseClass->setWindowTitle(QApplication::translate("HabrahabrAnd3DMouseClass", "HabrahabrAnd3DMouse", 0));
    } // retranslateUi

};

namespace Ui {
    class HabrahabrAnd3DMouseClass: public Ui_HabrahabrAnd3DMouseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HABRAHABRAND3DMOUSE_H
