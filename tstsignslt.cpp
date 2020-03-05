#include "tstsignslt.h"

tstSignSlt::tstSignSlt(QObject *parent) : QObject(parent)
{
    //connect(this, SIGNAL(signaldoWork(int)), this, SLOT(doWork(int)));
    //emit signaldoWork(6);
}
#include <QDebug>
void tstSignSlt::doWork(){
    qDebug() << 0;
}
