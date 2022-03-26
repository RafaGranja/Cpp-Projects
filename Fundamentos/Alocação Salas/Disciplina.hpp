#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include "Alocacao.hpp"
#include <set>
using namespace std;


struct compara_horario {
  bool operator()(const Alocacao& p1, const Alocacao& p2) {
    return p1.horario < p2.horario;
  }
};

struct Disciplina{
    string codigo;
    string nome;
    set<Alocacao,compara_horario> alocacao;
    Disciplina(string, string);
    void inserir_alocacao(string, string, string);
    void remover_alocacao(string);
    void imprimir_alocacao();
};


#endif