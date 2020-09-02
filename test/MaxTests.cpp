//
// Created by lapo on 02/09/20.
//
#include "gtest/gtest.h"
#include "../Max.h"

TEST(Max,Updating){
    auto *manager=new ValuesManagement;
    Max button(manager);
    manager->valuesUpdating(13.4,"test",0,0);
    manager->valuesUpdating(89,"test",8,9);
    manager->valuesUpdating(22,"test",1,9);
    manager->valuesUpdating(110,"test",7,7);
    button.redoneMax(true);
    ASSERT_EQ(110,button.getMax());
}
