#ifndef NAVE_H_
#define NAVE_H_

#include "Ponto2D.hpp"
 

struct Nave {
    Ponto2D posicao{0,0};
    Nave(Ponto2D,double);
    double forca=1;
    double energia=100;
    void mover(double, double);
    double calcular_distancia(Nave*);
    Nave* determinar_nave_mais_proxima(Nave**, int);
    void atacar(Nave**, int);
    void imprimir_status();
};

#endif