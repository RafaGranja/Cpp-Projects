#include "venda.hpp"

#include <cmath>
#include <iomanip>
#include <iostream>
#include <cctype>
using namespace std;

void Venda::adicionaCelular(const Celular& celular) {
    this->m_celulares.push_back(celular);
}

void Venda::ordena() {
  // TODO: Implemente este metodo
  // Preste atencao no exemplo que a descricao utilizada na ordenacao considera
  // a fabricante antes do modelo do celular
  this->m_celulares.sort();
}

void Venda::recarregaEstoque(int cod, int qtd) {
  // TODO: Implemente este metodo
    for (auto it = this->m_celulares.begin(); it != this->m_celulares.end(); it++){
        if(it->codigo==cod){
            it->qtd+=qtd;
            return;
        }
        else {
            continue;
        }
    }
}

void Venda::efetuaVenda(int cod, int qtd) {
  // TODO: Implemente este metodo
  /**
   * Observe na descricao do enunciado que nao e permita a venda de um modelo
   * cuja quantidade seja maior que a quantidade atual em estoque.
   * Ex: Se existirem apenas 5 celulares Motorola Moto G50 em estoque, vendas a
   * partir de 6 unidades devem ser ignoradas.
   */
   for (auto it = this->m_celulares.begin(); it != this->m_celulares.end(); it++){
        if(it->codigo==cod){
            if(it->qtd<qtd){
                return;
            }
            else{
                it->qtd-=qtd;
                return;
            }
        }
        else {
            continue;
        }
    }
}

void Venda::aplicaDesconto(const std::string& fabricante, float desconto) {
  // TODO: Implemente este metodo
  for (auto it = this->m_celulares.begin(); it != this->m_celulares.end(); it++){
        if(it->fabricante==fabricante){
            it->valor*=(1.00-(desconto/100.00));
        }
        else {
            continue;
        }
    }
}

void Venda::removeModelo(int cod) {
    for (auto it = this->m_celulares.begin(); it != this->m_celulares.end(); it++){
        if(it->codigo==cod){
            this->m_celulares.erase(it);
            return;
        }
        else {
            continue;
        }
    }
}

void Venda::imprimeEstoque() const {
  // TODO: Implemente este metodo.
  /**
   * Aqui voce tera que imprimir a lista de celulares em estoque com as
   * restricoes descritas no enunciado do problema. Notem no exemplo que a
   * primeira letra da cor do celular fica maiuscula. Outra coisa, se houver
   * apenas um item em estoque de determinado modelo de celular, voce tera que
   * imprimir '1 restante' e nao '1 restantes'. Por ultimo, apenas modelos de
   * celulares com pelo menos um item em estoque deverao ser exibidos.
   */
   string quantidade;
   string _cor;
   int i;
   char c;
   for (auto it = this->m_celulares.begin(); it != this->m_celulares.end(); it++){
       char c=toupper(it->cor[0]);
       if(it->qtd>=1){
            if(it->qtd==1){
                quantidade=" restante";
            }
            else if(it->qtd>1){
                quantidade=" restantes";
            }
            cout << fixed;
            cout.precision(0);
            cout<<it->fabricante<<" "<<it->modelo<<", "<<it->armazenamento<<"GB, "<<it->memoria<<"GB RAM, "<<it->peso*1000<<" gramas"<<", "<<c;
            for(i=1;i<it->cor.length();i++){
                cout<<it->cor[i];
            }
            cout << fixed;
            cout.precision(2);
            cout<<", "<<it->qtd<<quantidade<<", "<<"R$ ";
            cout << it->valor<<endl;
       }
       else {
           continue;
       }
    }
  
   
}