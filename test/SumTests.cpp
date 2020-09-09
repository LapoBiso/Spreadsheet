//
// Created by lapo on 01/09/20.
//
#include "gtest/gtest.h"
#include "../OperationButton.h"
#include "../Sum.h"
#include "../Model.h"

TEST(Sum,Updating){
    Model* model(nullptr);
    std::unique_ptr <OperationButton> operation (new Sum(model));
    operation->operation(true);
    ASSERT_EQ(25.41,operation->getResult());
}
