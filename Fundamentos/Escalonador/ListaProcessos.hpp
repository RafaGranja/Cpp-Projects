#ifndef LISTAPROCESSOS_H_
#define LISTAPROCESSOS_H_

#include "Processo.hpp"

struct ListaProcessos{
    Processo *cabeca=nullptr;
    Processo *ponta=nullptr;
    void adicionar_processo(Processo*);
    Processo* remover_processo_maior_prioridade();
    Processo* remover_processo_menor_prioridade();
    Processo* remover_processo_por_id(int id);
    void imprimir_lista();
};


#endif