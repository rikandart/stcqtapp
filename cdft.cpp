#include "cdft.h"
#include <QtMath>
#include <QDebug>

// реализация примера простого просчета дискретного преобразования фурье

void CDFT::DFT(double signal[]){
    if (signal == NULL)
        return;
    int N = ARRAY_SIZE;// длина последовательности отсчетов
    int K = N;
    for(int n = 0; n < N; n++){
        for(int k = 0; k < K; k++){
           real[n] += signal[n]*qCos((2*M_PI/N)*k*n);
           imag[n] += signal[n]*qSin((2*M_PI/N)*k*n);
        }
        qDebug() << real[n];
        qDebug() << imag[n];
        double pb_value = ((double)n/(double)N)*100;
        emit setPb(pb_value);
    }
    emit setPb(100);
}
