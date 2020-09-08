//
// Created by lapo on 08/09/20.
//
#include "gtest/gtest.h"
#include "../Result.h"

TEST(Result,text){
    Result result(nullptr);
    QVariant number("");
    result.setNumber(number);
    ASSERT_EQ("Cells are empty", result.text());
    number="21";
    result.setNumber(number);
    ASSERT_EQ("RESULT: 21",result.text());
}