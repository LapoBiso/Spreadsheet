//
// Created by lapo on 01/09/20.
//
#include "gtest/gtest.h"
#include <QApplication>
int main(int argc, char** argv){
    ::testing::InitGoogleTest(&argc,argv);
    QApplication app(argc,argv);
    return RUN_ALL_TESTS();
}
