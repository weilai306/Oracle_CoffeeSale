#ifndef MYSQLTABLEMODEL_H
#define MYSQLTABLEMODEL_H
#include <QSqlTableModel>
#include <QDateTime>
class MySqlTableModel: public QSqlTableModel
{
    Q_OBJECT
    public:
        explicit MySqlTableModel(QObject *parent = 0);
        QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;
};

#endif // MYSQLTABLEMODEL_H
