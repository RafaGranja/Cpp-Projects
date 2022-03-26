#include "ListaProcessos.hpp"


void ListaProcessos::adicionar_processo(Processo* proc){
    Processo* indice=this->cabeca;
    Processo* indiceAnterior=nullptr;
    Processo* aux = proc;
    if(this->cabeca==nullptr){//Lista vazia
        this->cabeca=aux;
        this->ponta=aux;
        
    }
    else if(this->cabeca==this->ponta){//Cabeça igual a ponta
        if(aux->prioridade>this->cabeca->prioridade){//Prioridade da cabeca menor
            aux->prox=this->cabeca;
            this->cabeca=aux;
        }
        else{//Prioridade da cabeça maior
            this->ponta->prox=aux;
            this->ponta=aux;
        }
    }
    else{
        while(indice->prioridade>=aux->prioridade){//Loop que ao final indice = o que deve ser colocado como prox. 
            if(indice==this->ponta){ // Condição de parada, se for igual a ponta quer dizer que deve ser adicionado por ultimo.                   
                this->ponta->prox=aux;
                this->ponta=aux;
                return;
            }
            else{// passa o indice para o proximo
                indiceAnterior=indice;
                indice=indice->prox;
            }
        }
        if(indice==this->cabeca){// se for igual a cabeca ela é substituída.
            aux->prox=this->cabeca;
            this->cabeca=aux;
        }
        else{// estando no meio, encaixado entre o indice anterior e o indice achado.
            indiceAnterior->prox=aux;
            aux->prox=indice;
        
        }
    }
}

Processo* ListaProcessos::remover_processo_maior_prioridade(){
    Processo* aux=nullptr;
    if(this->cabeca==this->ponta){//checa se existe mais de um processo.
        aux=this->cabeca;
        this->cabeca=nullptr;
        this->ponta=nullptr;
        return aux;
    }
    else{// Retira a cabeça.
        aux=this->cabeca;
        this->cabeca=aux->prox;
        return aux;
        
    }
}

Processo* ListaProcessos::remover_processo_menor_prioridade(){
    Processo* aux=nullptr;
    Processo* indice=this->cabeca;
    if(this->cabeca==this->ponta){//checa se existe mais de um processo.
        aux=this->ponta;
        this->cabeca=nullptr;
        this->ponta=nullptr;
    }
    else{
        while(indice->prox!=this->ponta){// procura o anterior a ponta.
            indice=indice->prox;
        }
        if(indice==this->cabeca){// caso tenha 2 elementos, a cabeça vira a ponta.
            aux=this->ponta;
            this->ponta=nullptr;
            this->ponta=this->cabeca;
        }
        else{// caso geral que a ponta vira o anterior.
            aux=this->ponta;
            this->ponta=indice;
            this->ponta->prox=nullptr;
        }
        
    }
    return aux;
}

Processo* ListaProcessos::remover_processo_por_id(int id){
    Processo* indice_anterior=nullptr;
    Processo* indice=this->cabeca;
    Processo* aux=nullptr;
    if(this->cabeca==nullptr){
        return aux;
    }
    else{
        while(indice->id!=id){
            if(indice==this->ponta){
                return aux;
            }
            indice_anterior=indice;
            indice=indice->prox;
        }
        aux=indice;
        if(indice==this->cabeca){
            if(this->cabeca==this->ponta){
                this->cabeca=nullptr;
                this->ponta=nullptr;
                return aux;
            }
            else{
                this->cabeca=this->cabeca->prox;
                return aux;
            }
        }
        else if(indice==this->ponta){
            if(this->cabeca==this->ponta){
                this->cabeca=nullptr;
                this->ponta=nullptr;
                return aux;
            }
            else{
                this->ponta=indice_anterior;
                return aux;
            }
        }
        else{
            indice_anterior->prox=indice->prox;
            return aux;
        }
    }
}

void ListaProcessos::imprimir_lista(){
    Processo* indice=this->cabeca;
    while(indice!=nullptr){
        indice->imprimir_dados();
        indice=indice->prox;
    }
}










