//
// Created by lapo on 01/09/20.
//
#include "gtest/gtest.h"
#include "../Sum.h"
#include <QMainWindow>
TEST(Sum,Updating){
    Sum button;
    button.updating(1.1,"test",0,0);
    ASSERT_EQ(1.1,button.getSum());
}
