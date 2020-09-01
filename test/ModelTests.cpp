//
// Created by lapo on 01/09/20.
//
#include "gtest/gtest.h"
#include "../Model.h"
#include <QModelIndex>

TEST(Model, rowCount){
    Model model;
    QModelIndex index;
    ASSERT_EQ(10,model.rowCount(index));
}

TEST(Model, columnCount){
    Model model;
    QModelIndex index;
    ASSERT_EQ(10,model.columnCount(index));
}