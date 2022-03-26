#ifndef PONTO2D_H_
#define PONTO2D_H_

#include <cmath>

struct Ponto2D {
    Ponto2D(double,double);
    double x;
    double y;
    double calcular_distancia(Ponto2D*);
};

#endif
