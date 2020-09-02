//
// Created by lapo on 01/09/20.
//
#include "gtest/gtest.h"
#include "../Sum.h"
#include "../ValuesManagement.h"
#include <QMainWindow>
TEST(Sum,Updating){
    auto *manager=new ValuesManagement;
    Sum button(manager);
    manager->valuesUpdating(1.1,"test",0,0);
    button.redoneSum(true);
    ASSERT_EQ(1.1,button.getSum());
}
