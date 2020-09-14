//
// Created by lapo on 02/09/20.
//
#include "gtest/gtest.h"
#include "../OperationButton.h"
#include "../Min.h"
#include <QVariant>

TEST(Min,Operation){
    Model model;
    std::unique_ptr <OperationButton> min (new Min(&model));
    model.setButton(min.get());
    model.setCellContent(78,-99);
    min->operation(true);
    ASSERT_EQ(-99,min->getResult());
    model.setCellContent(78,1111);
    model.setCellContent(0,"");
    model.setCellContent(67,-56.8);
    model.setCellContent(76,-1112);
    model.setCellContent(78,-1113);
    min->operation(true);
    ASSERT_EQ(-1113,min->getResult());
    model.setCellContent(78,"");
    min->operation(true);
    ASSERT_EQ(-1112,min->getResult());
}

TEST(Min,resetText){
    Model model;
    std::unique_ptr <OperationButton> min (new Min(&model));
    min->setText("VERIFYING BUG");
    min->resetText();
    ASSERT_EQ("MIN",min->text());
}

