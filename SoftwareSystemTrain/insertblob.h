#ifndef INSERTBLOB_H
#define INSERTBLOB_H
#include <basedao.h>
#include <QFile>
class InsertBlob
{
public:
    InsertBlob();
    void setBasedao(Basedao* bs);

private:
    Basedao* bs;
};

#endif // INSERTBLOB_H
