#ifndef TSTSIGNSLT_H
#define TSTSIGNSLT_H

#include <QObject>

class tstSignSlt : public QObject
{
    Q_OBJECT
public:
    explicit tstSignSlt(QObject *parent = nullptr);
signals:
    void signaldoWork(int);
public slots:
    void doWork(void);
};

#endif // TSTSIGNSLT_H
