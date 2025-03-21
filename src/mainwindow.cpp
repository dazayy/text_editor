#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QWidget>
#include <QHBoxLayout>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    verticalLayout = new QHBoxLayout(this);
    _widget1 = new QWidget(this);
    _widget2 = new QWidget(this);
    verticalLayout->addWidget(_widget1); 
    verticalLayout->addWidget(_widget2); 


}

MainWindow::~MainWindow(){}

