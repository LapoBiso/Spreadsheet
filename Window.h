//
// Created by lapo on 01/09/20.
//

#ifndef SPREADSHEET_WINDOW_H
#define SPREADSHEET_WINDOW_H
#include <QMainWindow>
#include <QTableView>
#include "Model.h"
#include "OperationButton.h"
#include "Sum.h"
#include "Result.h"
#include "Mean.h"
#include "Max.h"
#include "Min.h"

class Window: public QMainWindow{
    Q_OBJECT
public:
    explicit Window(QWidget* parent= nullptr);
    ~Window()=default;
private:
    std::unique_ptr<QTableView>table;
    std::unique_ptr<OperationButton> sumButton;
    std::unique_ptr<OperationButton> meanButton;
    std::unique_ptr<OperationButton> maxButton;
    std::unique_ptr<OperationButton> minButton;
    std::unique_ptr<Result> string;
};
#endif //SPREADSHEET_WINDOW_H
