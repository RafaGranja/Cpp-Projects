#include "Disciplina.hpp"
using namespace std;

Disciplina::Disciplina(string codigo, string nome){
    this->codigo=codigo;
    this->nome=nome;
}

void Disciplina::inserir_alocacao(string dia, string horario, string sala){
    this->alocacao.insert(Alocacao(dia, horario, sala));
}

void Disciplina::remover_alocacao(string horario){
    for(Alocacao p:this->alocacao){
        if(p.horario==horario){
            this->alocacao.erase(p);
            break;
        }
        else{
            continue;
        }
    }
}

void Disciplina::imprimir_alocacao(){
    for (Alocacao p :this->alocacao){
        cout << this->codigo<<"\t"<< this->nome<<"\t";
        p.imprimir_dados();
    }
}




