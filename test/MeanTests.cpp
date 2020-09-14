//
// Created by lapo on 02/09/20.
//
#include "gtest/gtest.h"
#include "../OperationButton.h"
#include "../Mean.h"
#include <QVariant>

TEST(Mean,Operation){
    Model model;
    std::unique_ptr <OperationButton> mean (new Mean(&model));
    model.setButton(mean.get());
    model.setCellContent(1,10);
    mean->operation(true);
    ASSERT_EQ(10,mean->getResult());
    model.setCellContent(99,72);
    model.setCellContent(99,-10);
    mean->operation(true);
    ASSERT_EQ(0,mean->getResult());
    model.setCellContent(27,46.6);
    model.setCellContent(1,"");
    mean->operation(true);
    ASSERT_EQ(18.3,mean->getResult());
}

TEST(Mean,resetText){
    Model model;
    std::unique_ptr <OperationButton> mean (new Mean(&model));
    mean->setText("");
    mean->resetText();
    ASSERT_EQ("MEAN",mean->text());
}