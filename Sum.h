//
// Created by lapo on 01/09/20.
//

#ifndef SPREADSHEET_SUM_H
#define SPREADSHEET_SUM_H
#include <QVariant>
#include "OperationButton.h"
class Sum: public OperationButton{
    Q_OBJECT
public:
    explicit Sum(Model* model,QWidget* parent=nullptr);
    ~Sum()=default;
    void resetText() override;
public slots:
    void operation(bool f) override;
};
#endif //SPREADSHEET_SUM_H
