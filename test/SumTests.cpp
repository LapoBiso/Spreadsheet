//
// Created by lapo on 01/09/20.
//
#include "gtest/gtest.h"
#include "../OperationButton.h"
#include "../Sum.h"
#include <QVariant>

TEST(Sum,Updating){
    Model model;
    std::unique_ptr <OperationButton> sum (new Sum(&model));
    model.setButton(sum.get());
    model.setCellContent(0,122);
    model.setCellContent(7,8.9);
    model.setCellContent(87,-7);
    sum->operation(true);
    ASSERT_EQ(123.9,sum->getResult());
}
