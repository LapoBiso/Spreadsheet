//
// Created by lapo on 02/09/20.
//

#ifndef SPREADSHEET_MAX_H
#define SPREADSHEET_MAX_H
#include <QVariant>
#include "OperationButton.h"
class Max: public OperationButton{
    Q_OBJECT
public:
    explicit Max(Model* model,QWidget* parent=nullptr);
    ~Max(){};
public slots:
    void operation(bool f) override;

};
#endif //SPREADSHEET_MAX_H
