/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad_Image;
    QWidget *centralWidget;
    QSlider *brightness_horizontalSlider;
    QSlider *red_horizontalSlider;
    QSlider *blue_horizontalSlider;
    QSlider *green_horizontalSlider;
    QPushButton *grayScale_pushButton;
    QPushButton *blur_pushButton;
    QPushButton *edge_pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *image_label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(824, 333);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        actionLoad_Image = new QAction(MainWindow);
        actionLoad_Image->setObjectName(QStringLiteral("actionLoad_Image"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        brightness_horizontalSlider = new QSlider(centralWidget);
        brightness_horizontalSlider->setObjectName(QStringLiteral("brightness_horizontalSlider"));
        brightness_horizontalSlider->setGeometry(QRect(20, 50, 160, 22));
        brightness_horizontalSlider->setMinimum(-255);
        brightness_horizontalSlider->setMaximum(255);
        brightness_horizontalSlider->setOrientation(Qt::Horizontal);
        red_horizontalSlider = new QSlider(centralWidget);
        red_horizontalSlider->setObjectName(QStringLiteral("red_horizontalSlider"));
        red_horizontalSlider->setGeometry(QRect(20, 140, 160, 22));
        red_horizontalSlider->setMinimum(-255);
        red_horizontalSlider->setMaximum(255);
        red_horizontalSlider->setOrientation(Qt::Horizontal);
        blue_horizontalSlider = new QSlider(centralWidget);
        blue_horizontalSlider->setObjectName(QStringLiteral("blue_horizontalSlider"));
        blue_horizontalSlider->setGeometry(QRect(20, 200, 160, 22));
        blue_horizontalSlider->setMinimum(-255);
        blue_horizontalSlider->setMaximum(255);
        blue_horizontalSlider->setOrientation(Qt::Horizontal);
        green_horizontalSlider = new QSlider(centralWidget);
        green_horizontalSlider->setObjectName(QStringLiteral("green_horizontalSlider"));
        green_horizontalSlider->setGeometry(QRect(20, 170, 160, 22));
        green_horizontalSlider->setMinimum(-255);
        green_horizontalSlider->setMaximum(255);
        green_horizontalSlider->setOrientation(Qt::Horizontal);
        grayScale_pushButton = new QPushButton(centralWidget);
        grayScale_pushButton->setObjectName(QStringLiteral("grayScale_pushButton"));
        grayScale_pushButton->setGeometry(QRect(190, 32, 131, 51));
        blur_pushButton = new QPushButton(centralWidget);
        blur_pushButton->setObjectName(QStringLiteral("blur_pushButton"));
        blur_pushButton->setGeometry(QRect(190, 90, 131, 51));
        edge_pushButton = new QPushButton(centralWidget);
        edge_pushButton->setObjectName(QStringLiteral("edge_pushButton"));
        edge_pushButton->setGeometry(QRect(190, 150, 131, 51));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 11, 91, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 131, 31));
        image_label = new QLabel(centralWidget);
        image_label->setObjectName(QStringLiteral("image_label"));
        image_label->setGeometry(QRect(330, 10, 481, 251));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 824, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad_Image);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionLoad_Image->setText(QApplication::translate("MainWindow", "Load Image", 0));
        grayScale_pushButton->setText(QApplication::translate("MainWindow", "Gray Scale", 0));
        blur_pushButton->setText(QApplication::translate("MainWindow", "Blur", 0));
        edge_pushButton->setText(QApplication::translate("MainWindow", "Edge Detection", 0));
        label->setText(QApplication::translate("MainWindow", "Brightness", 0));
        label_2->setText(QApplication::translate("MainWindow", "Color Change", 0));
        image_label->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
