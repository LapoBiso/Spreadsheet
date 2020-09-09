//
// Created by lapo on 01/09/20.
//
#include "gtest/gtest.h"
#include "../OperationButton.h"
#include "../ValuesManagement.h"
#include "../Sum.h"

TEST(Sum,Updating){
    auto *manager=new ValuesManagement;
    std::unique_ptr <OperationButton> operation (new Sum(manager));
    manager->valuesUpdating(1.1,"test",0,0);
    manager->valuesUpdating(24.31,"test",1,9);
    operation->operation(true);
    ASSERT_EQ(25.41,operation->getResult());
}
