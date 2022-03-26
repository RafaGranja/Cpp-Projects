#include "QuadroAlocacao.hpp"

using namespace std;

void QuadroAlocacao::inserir_alocacao(string codigo, string nome, string dia, string horario, string sala){
    int verify=0;
    for(auto it = this->materias.begin(); it != this->materias.end(); it++){
        if(it->first==codigo){
            it->second.inserir_alocacao(dia, horario, sala);
            verify=1;
        }
    }
    if(verify==0){
        Disciplina dis=Disciplina(codigo,nome);
        dis.inserir_alocacao(dia, horario, sala);
        this->materias.insert(pair<string,Disciplina>(codigo,dis));
    }
}

void QuadroAlocacao::remover_alocacao_disciplina(string codigo, string horario){
    for (auto it = this->materias.begin(); it != this->materias.end(); it++) {
        if(it->first==codigo){
            it->second.remover_alocacao(horario);
        }
    }
}

vector<Disciplina> QuadroAlocacao::recuperar_disciplinas_mais_ofertadas(){
    vector<Disciplina> vetor; 
    unsigned int big_size=0;
    for (auto it = this->materias.begin(); it != this->materias.end(); it++) {
        if(it->second.alocacao.size()>=big_size){
            if(it->second.alocacao.size()>big_size){
                vetor.erase (vetor.begin(),vetor.end());
                vetor.push_back(it->second);
            }
            else if(it->second.alocacao.size()==big_size){
                vetor.push_back(it->second);
            }
            big_size=it->second.alocacao.size();
        }
    }
    return vetor;
}

void QuadroAlocacao::imprimir_alocacao_completa(){
    for (auto it = this->materias.begin(); it != this->materias.end(); it++) {
        it->second.imprimir_alocacao();
    }
}




