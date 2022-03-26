#ifndef QUADRO_H
#define QUADRO_H

#include"Disciplina.hpp"
#include<map>
#include<vector>
using namespace std;

struct QuadroAlocacao{
    map<string,Disciplina> materias;
    void inserir_alocacao(string, string, string, string, string);
    void remover_alocacao_disciplina(string, string);
    vector<Disciplina> recuperar_disciplinas_mais_ofertadas();
    void imprimir_alocacao_completa();

};
#endif