#include <iostream>
#include <QApplication>
#include "Window.h"
#include "Model.h"

int main(int argc, char **argv) {
    QApplication app(argc,argv);
    Window window(nullptr);
    window.show();
    return app.exec();
}
