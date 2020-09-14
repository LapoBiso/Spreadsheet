//
// Created by lapo on 01/09/20.
//

#ifndef SPREADSHEET_MODEL_H
#define SPREADSHEET_MODEL_H
#include <QAbstractTableModel>
#include <memory>
#include <QBrush>
class OperationButton;
class Model: public QAbstractTableModel{
    Q_OBJECT
private:
    static const int rows {10};
    static const int columns {10};

public:
    explicit Model(QObject* parent= nullptr);
    ~Model()=default;
    int rowCount(const QModelIndex &parent) const override;
    int columnCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    Qt::ItemFlags flags(const QModelIndex &index) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
    std::map <int,QVariant> cellContent;
    void setCellContent(int position, const QVariant& value);
    void setButton(OperationButton* b);
    OperationButton* button;

public slots:
    void cleanCell(const QModelIndex &index);

    signals:
    void valueChanged(bool f);
};
#endif //SPREADSHEET_MODEL_H
