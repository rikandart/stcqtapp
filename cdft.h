#include<QObject>
#include <QProgressBar>
#define ARRAY_SIZE 4096
#ifndef CDFT_H
#define CDFT_H


class CDFT : public QObject {
    Q_OBJECT
public:
    CDFT(QProgressBar* pb){
        connect(this, SIGNAL(setPb(int)), pb, SLOT(setValue(int)));
    };
    ~CDFT(){}
    double* getReal() {
        return real;
    }
    double* getImag(){
        return imag;
    }

    void DFT(double[]);

private:
    double real[ARRAY_SIZE];
    double imag[ARRAY_SIZE];

signals:
    int setPb(int);
};

#endif // CDFT_H
