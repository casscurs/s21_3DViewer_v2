/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../../../display.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *label_filename;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_17;
    QLabel *label_vert;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_18;
    QLabel *label_face;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_screen;
    QPushButton *pushButton_gif;
    QSlider *horizontalSlider_timer;
    display *widget;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_15;
    QPushButton *pushButton_openFile;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *comboBox_projection;
    QTabWidget *tabWidget_settings;
    QWidget *vert_tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QRadioButton *radioButton_typeVert_none;
    QRadioButton *radioButton_typeVert_circle;
    QRadioButton *radioButton_typeVert_square;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_vertSize;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *comboBox_colorVert;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QSpinBox *spinBox_redVert;
    QSpinBox *spinBox_greenVert;
    QSpinBox *spinBox_blueVert;
    QPushButton *pushButton;
    QWidget *edge_tab;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QRadioButton *radioButton_typeEdge_solid;
    QRadioButton *radioButton_typeEdge_dotted;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_edgeSize;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QComboBox *comboBox_colorEdge;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QSpinBox *spinBox_redEdge;
    QSpinBox *spinBox_greenEdge;
    QSpinBox *spinBox_blueEdge;
    QPushButton *ChangeEdges;
    QWidget *tab;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_colorBack;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_23;
    QSpinBox *spinBox_redBack;
    QSpinBox *spinBox_greenBack;
    QSpinBox *spinBox_blueBack;
    QPushButton *Change_back;
    QGroupBox *groupBox_scale;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider_scale;
    QDoubleSpinBox *doubleSpinBox_scale;
    QPushButton *pushButton_scale;
    QGroupBox *groupBox_move;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_moveX;
    QRadioButton *radioButton_moveY;
    QRadioButton *radioButton_moveZ;
    QVBoxLayout *verticalLayout_3;
    QDoubleSpinBox *doubleSpinBox_move;
    QPushButton *pushButton_move;
    QGroupBox *groupBox_rotate;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_rotateX;
    QRadioButton *radioButton_rotateY;
    QRadioButton *radioButton_rotateZ;
    QSpinBox *spinBox_rotate;
    QPushButton *pushButton_rotate;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(984, 793);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        verticalLayout_16 = new QVBoxLayout(widget_3);
        verticalLayout_16->setObjectName("verticalLayout_16");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        verticalLayout_5->addWidget(label_2);

        label_filename = new QLabel(widget_3);
        label_filename->setObjectName("label_filename");
        label_filename->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setBold(true);
        label_filename->setFont(font);
        label_filename->setStyleSheet(QString::fromUtf8("color: rgb(25, 94, 255);\n"
"font-size: 16px"));

        verticalLayout_5->addWidget(label_filename);


        horizontalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_17 = new QLabel(widget_3);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        verticalLayout_6->addWidget(label_17);

        label_vert = new QLabel(widget_3);
        label_vert->setObjectName("label_vert");
        label_vert->setMinimumSize(QSize(100, 0));
        label_vert->setFont(font);
        label_vert->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 16px"));

        verticalLayout_6->addWidget(label_vert);


        horizontalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_18 = new QLabel(widget_3);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        verticalLayout_7->addWidget(label_18);

        label_face = new QLabel(widget_3);
        label_face->setObjectName("label_face");
        label_face->setMinimumSize(QSize(100, 0));
        label_face->setFont(font);
        label_face->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 16px"));

        verticalLayout_7->addWidget(label_face);


        horizontalLayout_9->addLayout(verticalLayout_7);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_8->addWidget(pushButton_2);

        pushButton_screen = new QPushButton(widget_3);
        pushButton_screen->setObjectName("pushButton_screen");

        verticalLayout_8->addWidget(pushButton_screen);

        pushButton_gif = new QPushButton(widget_3);
        pushButton_gif->setObjectName("pushButton_gif");

        verticalLayout_8->addWidget(pushButton_gif);

        horizontalSlider_timer = new QSlider(widget_3);
        horizontalSlider_timer->setObjectName("horizontalSlider_timer");
        horizontalSlider_timer->setEnabled(false);
        horizontalSlider_timer->setMaximum(100);
        horizontalSlider_timer->setOrientation(Qt::Horizontal);
        horizontalSlider_timer->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_timer->setTickInterval(10);

        verticalLayout_8->addWidget(horizontalSlider_timer);


        horizontalLayout_10->addLayout(verticalLayout_8);


        verticalLayout_16->addLayout(horizontalLayout_10);


        gridLayout->addWidget(widget_3, 2, 0, 1, 1);

        widget = new display(centralwidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(600, 600));

        gridLayout->addWidget(widget, 0, 0, 2, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(350, 0));
        widget_2->setMaximumSize(QSize(350, 16777215));
        verticalLayout_15 = new QVBoxLayout(widget_2);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setSizeConstraint(QLayout::SetNoConstraint);
        pushButton_openFile = new QPushButton(widget_2);
        pushButton_openFile->setObjectName("pushButton_openFile");
        pushButton_openFile->setMinimumSize(QSize(0, 40));
        pushButton_openFile->setFont(font);
        pushButton_openFile->setStyleSheet(QString::fromUtf8("color: rgb(16, 19, 26);\n"
"background-color: rgb(255, 118, 21);\n"
"border-radius: 1em;\n"
"margin: 0px 12px;"));

        verticalLayout_15->addWidget(pushButton_openFile);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        horizontalLayout_5->addWidget(label_3);

        comboBox_projection = new QComboBox(widget_2);
        comboBox_projection->addItem(QString());
        comboBox_projection->addItem(QString());
        comboBox_projection->setObjectName("comboBox_projection");
        comboBox_projection->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        horizontalLayout_5->addWidget(comboBox_projection);


        verticalLayout_15->addLayout(horizontalLayout_5);

        tabWidget_settings = new QTabWidget(widget_2);
        tabWidget_settings->setObjectName("tabWidget_settings");
        tabWidget_settings->setMinimumSize(QSize(0, 160));
        vert_tab = new QWidget();
        vert_tab->setObjectName("vert_tab");
        layoutWidget = new QWidget(vert_tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 301, 221));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        radioButton_typeVert_none = new QRadioButton(layoutWidget);
        radioButton_typeVert_none->setObjectName("radioButton_typeVert_none");
        radioButton_typeVert_none->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_typeVert_none);

        radioButton_typeVert_circle = new QRadioButton(layoutWidget);
        radioButton_typeVert_circle->setObjectName("radioButton_typeVert_circle");

        horizontalLayout_3->addWidget(radioButton_typeVert_circle);

        radioButton_typeVert_square = new QRadioButton(layoutWidget);
        radioButton_typeVert_square->setObjectName("radioButton_typeVert_square");

        horizontalLayout_3->addWidget(radioButton_typeVert_square);


        verticalLayout_9->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        doubleSpinBox_vertSize = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_vertSize->setObjectName("doubleSpinBox_vertSize");

        horizontalLayout_4->addWidget(doubleSpinBox_vertSize);


        verticalLayout_9->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        comboBox_colorVert = new QComboBox(layoutWidget);
        comboBox_colorVert->addItem(QString());
        comboBox_colorVert->addItem(QString());
        comboBox_colorVert->addItem(QString());
        comboBox_colorVert->addItem(QString());
        comboBox_colorVert->addItem(QString());
        comboBox_colorVert->setObjectName("comboBox_colorVert");

        horizontalLayout_2->addWidget(comboBox_colorVert);


        verticalLayout_9->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        spinBox_redVert = new QSpinBox(layoutWidget);
        spinBox_redVert->setObjectName("spinBox_redVert");
        spinBox_redVert->setMaximum(255);
        spinBox_redVert->setValue(255);

        horizontalLayout_8->addWidget(spinBox_redVert);

        spinBox_greenVert = new QSpinBox(layoutWidget);
        spinBox_greenVert->setObjectName("spinBox_greenVert");
        spinBox_greenVert->setMaximum(255);
        spinBox_greenVert->setValue(255);

        horizontalLayout_8->addWidget(spinBox_greenVert);

        spinBox_blueVert = new QSpinBox(layoutWidget);
        spinBox_blueVert->setObjectName("spinBox_blueVert");
        spinBox_blueVert->setMaximum(255);
        spinBox_blueVert->setValue(255);

        horizontalLayout_8->addWidget(spinBox_blueVert);


        verticalLayout_9->addLayout(horizontalLayout_8);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout_9->addWidget(pushButton);

        tabWidget_settings->addTab(vert_tab, QString());
        edge_tab = new QWidget();
        edge_tab->setObjectName("edge_tab");
        layoutWidget1 = new QWidget(edge_tab);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 0, 301, 221));
        verticalLayout_10 = new QVBoxLayout(layoutWidget1);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");

        horizontalLayout_11->addWidget(label_9);

        radioButton_typeEdge_solid = new QRadioButton(layoutWidget1);
        radioButton_typeEdge_solid->setObjectName("radioButton_typeEdge_solid");
        radioButton_typeEdge_solid->setChecked(true);

        horizontalLayout_11->addWidget(radioButton_typeEdge_solid);

        radioButton_typeEdge_dotted = new QRadioButton(layoutWidget1);
        radioButton_typeEdge_dotted->setObjectName("radioButton_typeEdge_dotted");

        horizontalLayout_11->addWidget(radioButton_typeEdge_dotted);


        verticalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");

        horizontalLayout_12->addWidget(label_10);

        doubleSpinBox_edgeSize = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_edgeSize->setObjectName("doubleSpinBox_edgeSize");
        doubleSpinBox_edgeSize->setSingleStep(0.100000000000000);

        horizontalLayout_12->addWidget(doubleSpinBox_edgeSize);


        verticalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName("label_11");

        horizontalLayout_14->addWidget(label_11);

        comboBox_colorEdge = new QComboBox(layoutWidget1);
        comboBox_colorEdge->addItem(QString());
        comboBox_colorEdge->addItem(QString());
        comboBox_colorEdge->addItem(QString());
        comboBox_colorEdge->addItem(QString());
        comboBox_colorEdge->addItem(QString());
        comboBox_colorEdge->setObjectName("comboBox_colorEdge");

        horizontalLayout_14->addWidget(comboBox_colorEdge);


        verticalLayout_10->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");

        horizontalLayout_13->addWidget(label_8);

        spinBox_redEdge = new QSpinBox(layoutWidget1);
        spinBox_redEdge->setObjectName("spinBox_redEdge");
        spinBox_redEdge->setMaximum(255);
        spinBox_redEdge->setValue(255);

        horizontalLayout_13->addWidget(spinBox_redEdge);

        spinBox_greenEdge = new QSpinBox(layoutWidget1);
        spinBox_greenEdge->setObjectName("spinBox_greenEdge");
        spinBox_greenEdge->setMaximum(255);
        spinBox_greenEdge->setValue(255);

        horizontalLayout_13->addWidget(spinBox_greenEdge);

        spinBox_blueEdge = new QSpinBox(layoutWidget1);
        spinBox_blueEdge->setObjectName("spinBox_blueEdge");
        spinBox_blueEdge->setMaximum(255);
        spinBox_blueEdge->setValue(255);

        horizontalLayout_13->addWidget(spinBox_blueEdge);


        verticalLayout_10->addLayout(horizontalLayout_13);

        ChangeEdges = new QPushButton(layoutWidget1);
        ChangeEdges->setObjectName("ChangeEdges");

        verticalLayout_10->addWidget(ChangeEdges);

        tabWidget_settings->addTab(edge_tab, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        layoutWidget2 = new QWidget(tab);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 0, 301, 161));
        verticalLayout_20 = new QVBoxLayout(layoutWidget2);
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox_colorBack = new QComboBox(layoutWidget2);
        comboBox_colorBack->addItem(QString());
        comboBox_colorBack->addItem(QString());
        comboBox_colorBack->addItem(QString());
        comboBox_colorBack->addItem(QString());
        comboBox_colorBack->addItem(QString());
        comboBox_colorBack->setObjectName("comboBox_colorBack");

        horizontalLayout->addWidget(comboBox_colorBack);


        verticalLayout_20->addLayout(horizontalLayout);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        label_23 = new QLabel(layoutWidget2);
        label_23->setObjectName("label_23");

        horizontalLayout_24->addWidget(label_23);

        spinBox_redBack = new QSpinBox(layoutWidget2);
        spinBox_redBack->setObjectName("spinBox_redBack");
        spinBox_redBack->setMaximum(255);

        horizontalLayout_24->addWidget(spinBox_redBack);

        spinBox_greenBack = new QSpinBox(layoutWidget2);
        spinBox_greenBack->setObjectName("spinBox_greenBack");
        spinBox_greenBack->setMaximum(255);

        horizontalLayout_24->addWidget(spinBox_greenBack);

        spinBox_blueBack = new QSpinBox(layoutWidget2);
        spinBox_blueBack->setObjectName("spinBox_blueBack");
        spinBox_blueBack->setMaximum(255);

        horizontalLayout_24->addWidget(spinBox_blueBack);


        verticalLayout_20->addLayout(horizontalLayout_24);

        Change_back = new QPushButton(layoutWidget2);
        Change_back->setObjectName("Change_back");

        verticalLayout_20->addWidget(Change_back);

        tabWidget_settings->addTab(tab, QString());

        verticalLayout_15->addWidget(tabWidget_settings);

        groupBox_scale = new QGroupBox(widget_2);
        groupBox_scale->setObjectName("groupBox_scale");
        groupBox_scale->setMaximumSize(QSize(16777215, 130));
        verticalLayout = new QVBoxLayout(groupBox_scale);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSlider_scale = new QSlider(groupBox_scale);
        horizontalSlider_scale->setObjectName("horizontalSlider_scale");
        horizontalSlider_scale->setMinimum(1);
        horizontalSlider_scale->setMaximum(300);
        horizontalSlider_scale->setPageStep(1);
        horizontalSlider_scale->setValue(50);
        horizontalSlider_scale->setOrientation(Qt::Horizontal);
        horizontalSlider_scale->setTickPosition(QSlider::NoTicks);
        horizontalSlider_scale->setTickInterval(1);

        verticalLayout->addWidget(horizontalSlider_scale);

        doubleSpinBox_scale = new QDoubleSpinBox(groupBox_scale);
        doubleSpinBox_scale->setObjectName("doubleSpinBox_scale");
        doubleSpinBox_scale->setMinimum(0.010000000000000);
        doubleSpinBox_scale->setMaximum(3.000000000000000);
        doubleSpinBox_scale->setSingleStep(0.100000000000000);
        doubleSpinBox_scale->setValue(0.500000000000000);

        verticalLayout->addWidget(doubleSpinBox_scale);

        pushButton_scale = new QPushButton(groupBox_scale);
        pushButton_scale->setObjectName("pushButton_scale");

        verticalLayout->addWidget(pushButton_scale);


        verticalLayout_15->addWidget(groupBox_scale);

        groupBox_move = new QGroupBox(widget_2);
        groupBox_move->setObjectName("groupBox_move");
        verticalLayout_12 = new QVBoxLayout(groupBox_move);
        verticalLayout_12->setObjectName("verticalLayout_12");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        radioButton_moveX = new QRadioButton(groupBox_move);
        radioButton_moveX->setObjectName("radioButton_moveX");

        verticalLayout_2->addWidget(radioButton_moveX);

        radioButton_moveY = new QRadioButton(groupBox_move);
        radioButton_moveY->setObjectName("radioButton_moveY");

        verticalLayout_2->addWidget(radioButton_moveY);

        radioButton_moveZ = new QRadioButton(groupBox_move);
        radioButton_moveZ->setObjectName("radioButton_moveZ");

        verticalLayout_2->addWidget(radioButton_moveZ);


        horizontalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        doubleSpinBox_move = new QDoubleSpinBox(groupBox_move);
        doubleSpinBox_move->setObjectName("doubleSpinBox_move");
        doubleSpinBox_move->setMinimum(-100000.000000000000000);
        doubleSpinBox_move->setMaximum(100000.000000000000000);

        verticalLayout_3->addWidget(doubleSpinBox_move);

        pushButton_move = new QPushButton(groupBox_move);
        pushButton_move->setObjectName("pushButton_move");
        QPalette palette;
        pushButton_move->setPalette(palette);

        verticalLayout_3->addWidget(pushButton_move);


        horizontalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_12->addLayout(horizontalLayout_6);


        verticalLayout_15->addWidget(groupBox_move);

        groupBox_rotate = new QGroupBox(widget_2);
        groupBox_rotate->setObjectName("groupBox_rotate");
        groupBox_rotate->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_14 = new QVBoxLayout(groupBox_rotate);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        radioButton_rotateX = new QRadioButton(groupBox_rotate);
        radioButton_rotateX->setObjectName("radioButton_rotateX");

        horizontalLayout_7->addWidget(radioButton_rotateX);

        radioButton_rotateY = new QRadioButton(groupBox_rotate);
        radioButton_rotateY->setObjectName("radioButton_rotateY");

        horizontalLayout_7->addWidget(radioButton_rotateY);

        radioButton_rotateZ = new QRadioButton(groupBox_rotate);
        radioButton_rotateZ->setObjectName("radioButton_rotateZ");

        horizontalLayout_7->addWidget(radioButton_rotateZ);


        verticalLayout_4->addLayout(horizontalLayout_7);

        spinBox_rotate = new QSpinBox(groupBox_rotate);
        spinBox_rotate->setObjectName("spinBox_rotate");
        spinBox_rotate->setMinimum(-180);
        spinBox_rotate->setMaximum(180);
        spinBox_rotate->setSingleStep(30);

        verticalLayout_4->addWidget(spinBox_rotate);

        pushButton_rotate = new QPushButton(groupBox_rotate);
        pushButton_rotate->setObjectName("pushButton_rotate");

        verticalLayout_4->addWidget(pushButton_rotate);


        verticalLayout_14->addLayout(verticalLayout_4);


        verticalLayout_15->addWidget(groupBox_rotate);


        gridLayout->addWidget(widget_2, 0, 1, 3, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget_settings->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "omg its a 3D viewwerw", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "filename:", nullptr));
        label_filename->setText(QCoreApplication::translate("MainWindow", "No file", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "vertices:", nullptr));
        label_vert->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "edges:", nullptr));
        label_face->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Reload", nullptr));
        pushButton_screen->setText(QCoreApplication::translate("MainWindow", "Screen", nullptr));
        pushButton_gif->setText(QCoreApplication::translate("MainWindow", "GIF", nullptr));
        pushButton_openFile->setText(QCoreApplication::translate("MainWindow", "OPEN FILE", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Type of projection", nullptr));
        comboBox_projection->setItemText(0, QCoreApplication::translate("MainWindow", "Parallel", nullptr));
        comboBox_projection->setItemText(1, QCoreApplication::translate("MainWindow", "Central", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        radioButton_typeVert_none->setText(QCoreApplication::translate("MainWindow", "none", nullptr));
        radioButton_typeVert_circle->setText(QCoreApplication::translate("MainWindow", "circle", nullptr));
        radioButton_typeVert_square->setText(QCoreApplication::translate("MainWindow", "square", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        comboBox_colorVert->setItemText(0, QCoreApplication::translate("MainWindow", "white", nullptr));
        comboBox_colorVert->setItemText(1, QCoreApplication::translate("MainWindow", "black", nullptr));
        comboBox_colorVert->setItemText(2, QCoreApplication::translate("MainWindow", "red", nullptr));
        comboBox_colorVert->setItemText(3, QCoreApplication::translate("MainWindow", "green", nullptr));
        comboBox_colorVert->setItemText(4, QCoreApplication::translate("MainWindow", "blue", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "RGB", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        tabWidget_settings->setTabText(tabWidget_settings->indexOf(vert_tab), QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        radioButton_typeEdge_solid->setText(QCoreApplication::translate("MainWindow", "solid", nullptr));
        radioButton_typeEdge_dotted->setText(QCoreApplication::translate("MainWindow", "dotted", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        comboBox_colorEdge->setItemText(0, QCoreApplication::translate("MainWindow", "white", nullptr));
        comboBox_colorEdge->setItemText(1, QCoreApplication::translate("MainWindow", "black", nullptr));
        comboBox_colorEdge->setItemText(2, QCoreApplication::translate("MainWindow", "red", nullptr));
        comboBox_colorEdge->setItemText(3, QCoreApplication::translate("MainWindow", "green", nullptr));
        comboBox_colorEdge->setItemText(4, QCoreApplication::translate("MainWindow", "blue", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "RGB", nullptr));
        ChangeEdges->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        tabWidget_settings->setTabText(tabWidget_settings->indexOf(edge_tab), QCoreApplication::translate("MainWindow", "Edges", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        comboBox_colorBack->setItemText(0, QCoreApplication::translate("MainWindow", "black", nullptr));
        comboBox_colorBack->setItemText(1, QCoreApplication::translate("MainWindow", "white", nullptr));
        comboBox_colorBack->setItemText(2, QCoreApplication::translate("MainWindow", "red", nullptr));
        comboBox_colorBack->setItemText(3, QCoreApplication::translate("MainWindow", "green", nullptr));
        comboBox_colorBack->setItemText(4, QCoreApplication::translate("MainWindow", "blue", nullptr));

        label_23->setText(QCoreApplication::translate("MainWindow", "RGB", nullptr));
        Change_back->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        tabWidget_settings->setTabText(tabWidget_settings->indexOf(tab), QCoreApplication::translate("MainWindow", "Background", nullptr));
        groupBox_scale->setTitle(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        pushButton_scale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        groupBox_move->setTitle(QCoreApplication::translate("MainWindow", "Move", nullptr));
        radioButton_moveX->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        radioButton_moveY->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        radioButton_moveZ->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        pushButton_move->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        groupBox_rotate->setTitle(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        radioButton_rotateX->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        radioButton_rotateY->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        radioButton_rotateZ->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        pushButton_rotate->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
