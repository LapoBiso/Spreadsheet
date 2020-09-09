//
// Created by lapo on 09/09/20.
//

#ifndef SPREADSHEET_OPERATIONBUTTON_H
#define SPREADSHEET_OPERATIONBUTTON_H
#include <QPushButton>
#include <QVariant>
#include "Model.h"

class OperationButton: public QPushButton{
    Q_OBJECT
public:
    explicit OperationButton(Model* model, QWidget* parent=nullptr);
    virtual ~OperationButton(){};
public slots:
    virtual void operation(bool f)=0;
signals:
    void updatedResult(QVariant &number);
protected:
    QVariant result;
    Model* model;
public:
    double getResult() const;

};
#endif //SPREADSHEET_OPERATIONBUTTON_H
