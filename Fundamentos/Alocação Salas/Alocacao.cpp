#include "Alocacao.hpp"
using namespace std;

Alocacao::Alocacao(string dia, string horario, string sala){
    this->dia=dia;
    this->horario=horario;
    this->sala=sala;
}

void Alocacao::imprimir_dados(){
    cout<<this->dia<<"\t"<<this->horario<<"\t"<<this->sala<<endl;
}