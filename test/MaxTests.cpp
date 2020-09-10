//
// Created by lapo on 02/09/20.
//
#include "gtest/gtest.h"
#include "../OperationButton.h"
#include "../Max.h"
#include <QVariant>

TEST(Max,Operation){
    Model model;
    std::unique_ptr <OperationButton> max (new Max(&model));
    model.setButton(max.get());
    model.setCellContent(17,0);
    model.setCellContent(45,89);
    model.setCellContent(17,"");
    model.setCellContent(84,-100);
    model.setCellContent(45,91);
    max->operation(true);
    ASSERT_EQ(91,max->getResult());
}

TEST(Max,resetText){
    Model model;
    std::unique_ptr <OperationButton> max (new Max(&model));
    max->setText("TESTING_METHOD");
    max->resetText();
    ASSERT_EQ("MAX",max->text());
}