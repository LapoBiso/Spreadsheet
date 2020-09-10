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
    model.setCellContent(99,72);
    model.setCellContent(99,-10);
    model.setCellContent(27,46.6);
    model.setCellContent(1,"");
    mean->operation(true);
    ASSERT_EQ(18.3,mean->getResult());
}

