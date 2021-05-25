#include "mysqltablemodel.h"

MySqlTableModel::MySqlTableModel(QObject *parent) :
    QSqlTableModel(parent)
{

}

QVariant MySqlTableModel::data(const QModelIndex & index,
        int role) const
{
    if (!index.isValid())
        return QVariant();

    QVariant vt = QSqlTableModel::data(index, role);
    if (QVariant::DateTime == vt.type())
    {
        QDateTime time=vt.toDateTime();
        return time.toString("yyyy-MM-dd");
    }
    return vt;
}
