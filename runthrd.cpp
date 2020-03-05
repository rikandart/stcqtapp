#include "runthrd.h"
#include <QMessageBox>
#include <QRandomGenerator>
#include "cdft.h"

bool runthrd::canRun = true;
int runthrd::top_pos = 0;
unsigned int runthrd::thread_count = 0;

runthrd::runthrd(QProgressBar *pb, QLabel *lbl) : pb(pb), lbl(lbl)
{
    /*if(!top_pos)
        top_pos = 20;
    else
        top_pos += 30;
    thread_count++;
    if(thread_count > MAX_THREAD){
        QMessageBox::warning(pb->parentWidget(), "Внимание!",  "Достигнуто предельное количество потоков!");
        /*QMessageBox msgBox(pb->parentWidget());
        msgBox.setWindowTitle("Внимание!");
        msgBox.setText("Достигнуто предельное количество потоков!");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.exec();*/
        /*canRun = false;
    } else {
        pb->setGeometry(QRect(310, top_pos, 118, 23));
        pb->show();
    }*/
    //connect(this, SIGNAL(setPb(int)), pb, SLOT(setValue(int)));
}

void runthrd::run(){
    double count = 0;
    double discrete_signal[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        discrete_signal[i] = QRandomGenerator::global()->generateDouble() * 1e9;
    }

    (new CDFT(pb))->DFT(discrete_signal);
    lbl->setVisible(true);
    /*while(count != 5){
        this->msleep(500);
        count++;
        int value = pb->value();
        if((value += (count++/5)*100) > 100)
            emit setPb(100);
        else
            emit setPb(value);
    }*/
}

runthrd::~runthrd(){
    delete this;
}
