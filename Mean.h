//
// Created by lapo on 02/09/20.
//

#ifndef SPREADSHEET_MEAN_H
#define SPREADSHEET_MEAN_H
#include "OperationButton.h"
#include <QVariant>
#include "ValuesManagement.h"
class Mean: public OperationButton{
    Q_OBJECT
public:
    explicit Mean(ValuesManagement *manager,QWidget* parent=nullptr);
    ~Mean(){};
public slots:
    void operation(bool f) override;
private:
    ValuesManagement* manager;
};
#endif //SPREADSHEET_MEAN_H
