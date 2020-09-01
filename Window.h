//
// Created by lapo on 01/09/20.
//

#ifndef SPREADSHEET_WINDOW_H
#define SPREADSHEET_WINDOW_H
#include <QMainWindow>
#include <QTableView>
#include <Model.h>
#include <Sum.h>
#include <Result.h>
class Window: public QMainWindow{
    Q_OBJECT
public:
    explicit Window(QWidget* parent= nullptr);

private:
    QTableView* table;
    Sum* sumButton;
    Result* string;

public slots:
    void editTitle();

};
#endif //SPREADSHEET_WINDOW_H
