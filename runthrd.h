#define MAX_THREAD 10
#ifndef RUNTHRD_H
#define RUNTHRD_H

#include <QThread>
#include <QProgressBar>
#include <QLabel>

class runthrd : public QThread
{

    Q_OBJECT
public:
    runthrd(QProgressBar *pb, QLabel *lbl);
    virtual ~runthrd();
    static bool canRun;
    static void init();

private:
    QProgressBar *pb;
    QLabel *lbl;
    static unsigned int thread_count;
    static int top_pos;// считываем количество потоков
    void run();
/*signals:
    int setPb(int);*/

};

#endif // RUNTHRD_H
