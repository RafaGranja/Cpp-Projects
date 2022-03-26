#ifndef PROCESSO_H_
#define PROCESSO_H_

#include<iostream>

struct Processo{
    int id;
    int prioridade;
    std::string nome;
    Processo(int,std::string,int);
    void imprimir_dados();
    Processo *prox;
};

#endif