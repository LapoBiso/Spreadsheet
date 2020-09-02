//
// Created by lapo on 02/09/20.
//
#include "gtest/gtest.h"
#include "../Min.h"

TEST(Min,Updating){
    auto *manager=new ValuesManagement;
    Min button(manager);
    manager->valuesUpdating(11.3,"test",9,9);
    manager->valuesUpdating(1.1,"test",3,2);
    manager->valuesUpdating(99.9,"test",0,4);
    manager->valuesUpdating(1.99,"test",8,2);
    button.redoneMin(true);
    ASSERT_EQ(1.1,button.getMin());
}

