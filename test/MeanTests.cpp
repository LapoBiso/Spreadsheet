//
// Created by lapo on 02/09/20.
//
#include "gtest/gtest.h"
#include "../Mean.h"

TEST(Mean,Updating){
    auto *manager=new ValuesManagement;
    Mean button(manager);
    manager->valuesUpdating(10,"test",0,0);
    manager->valuesUpdating(12,"test",1,7);
    manager->valuesUpdating(7,"test",0,6);
    manager->valuesUpdating(11,"test",1,0);
    button.redoneMean(true);
    ASSERT_EQ(10,button.getMean());
}

