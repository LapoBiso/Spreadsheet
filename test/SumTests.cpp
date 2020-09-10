//
// Created by lapo on 01/09/20.
//
#include "gtest/gtest.h"
#include "../OperationButton.h"
#include "../Sum.h"
#include <QVariant>

TEST(Sum,Operation){
    Model model;
    std::unique_ptr <OperationButton> sum (new Sum(&model));
    model.setButton(sum.get());
    model.setCellContent(0,122);
    model.setCellContent(7,8.9);
    model.setCellContent(87,-7);
    model.setCellContent(0,"");
    model.setCellContent(7,1);
    sum->operation(true);
    ASSERT_EQ(-6,sum->getResult());
}

TEST(Sum,resetText){
    Model model;
    std::unique_ptr <OperationButton> sum (new Sum(&model));
    sum->setText("TESTING.....");
    sum->resetText();
    ASSERT_EQ("SUM",sum->text());
}