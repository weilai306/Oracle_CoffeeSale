#include "insertblob.h"

InsertBlob::InsertBlob()
{
    QByteArray arr;
    QFile* file;
    QString sql;
    file=new QFile("");
    sql=QString("update member set picture=:pic where name=':name'");
    file->open(QIODevice::ReadOnly);
    bs->execStr(sql);

}

void InsertBlob::setBasedao(Basedao *bs)
{
    this->bs=bs;
}

