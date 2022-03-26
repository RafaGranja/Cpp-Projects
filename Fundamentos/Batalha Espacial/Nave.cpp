#include "Nave.hpp"
#include <iostream>


Nave::Nave(Ponto2D posicao,double forca){
    this->posicao=posicao;
    this->forca=forca;
}

void Nave::mover(double dx, double dy){
    this->posicao.x+=dx;
    this->posicao.y+=dy;
}

double Nave::calcular_distancia(Nave* nave){
    return sqrt(pow((nave->posicao.x)-(this->posicao.x),2)+pow((nave->posicao.y)-(this->posicao.y),2));
}

Nave* Nave::determinar_nave_mais_proxima(Nave** naves, int n){
    int NaveMaisProx=0,i=0;
    double distancia_menor=10000;
    double distancia=0;
    for(i=0;i<n;i++){
        distancia=this->calcular_distancia(naves[i]);
        if(distancia<distancia_menor && distancia!=0){
            distancia_menor=distancia;
            NaveMaisProx=i;
        }
    }
    return naves[NaveMaisProx];
}

void Nave::atacar(Nave** naves, int n){
    Nave* NaveMaisProx=this->determinar_nave_mais_proxima(naves,n);
    double distancia=this->calcular_distancia(NaveMaisProx);
    double dano=(100.0/distancia)*(this->forca);
    if(dano>30){
        dano=30;
    }
    NaveMaisProx->energia-=dano;
    if(NaveMaisProx->energia<=50){
        std::cout << "Energia baixa!" << std::endl;
    }
}

void Nave::imprimir_status(){
    std::cout<< this->posicao.x << " " << this->posicao.y << " " << this->energia << std::endl;
}


