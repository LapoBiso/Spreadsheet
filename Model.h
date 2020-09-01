//
// Created by lapo on 01/09/20.
//

#ifndef SPREADSHEET_MODEL_H
#define SPREADSHEET_MODEL_H
#include <QAbstractTableModel>

class Model: public QAbstractTableModel{
    Q_OBJECT
public:
    explicit Model(QObject* parent= nullptr);
    int rowCount(const QModelIndex &parent) const override;
    int columnCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;
    Qt::ItemFlags flags(const QModelIndex &index) const override;

private:
    static const int rows {10};
    static const int columns {10};
    QVariant cellContent [rows][columns];
    signals:
    void valueInserted(const double & number,const QString &string, const int &row, const int &column);
};
#endif //SPREADSHEET_MODEL_H
