#include <iostream>
#include <QApplication>
#include <QLabel>

#include "mainwindow.h"

using namespace std;


int main(int argc, char *argv[]) {
    
    QApplication app(argc, argv);
    MainWindow w;
    w.show();
    return app.exec();

}
