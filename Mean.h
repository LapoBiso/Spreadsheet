//
// Created by lapo on 02/09/20.
//

#ifndef SPREADSHEET_MEAN_H
#define SPREADSHEET_MEAN_H
#include "OperationButton.h"
#include <QVariant>
class Mean: public OperationButton{
    Q_OBJECT
public:
    explicit Mean(Model* model,QWidget* parent=nullptr);
    ~Mean()=default;
    void resetText() override;
public slots:
    void operation(bool f) override;
};
#endif //SPREADSHEET_MEAN_H
