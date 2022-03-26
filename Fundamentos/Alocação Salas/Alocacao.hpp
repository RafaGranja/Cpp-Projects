#ifndef ALOCACAO_H
#define ALOCACAO_H

#include <iostream>
#include <string>

using namespace std;


struct Alocacao{
    string dia;
    string horario;
    string sala;
    Alocacao(string,string,string);
    void imprimir_dados();
};

#endif