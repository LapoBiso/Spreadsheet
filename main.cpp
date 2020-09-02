#include <iostream>
#include <QApplication>
#include "Window.h"

int main(int argc, char **argv) {
    QApplication app(argc,argv);
    Window window(nullptr);
    window.show();
    return app.exec();
}
