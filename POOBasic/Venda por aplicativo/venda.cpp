#include "venda.hpp"

#include <iomanip>

Venda::~Venda() {
  // TODO: Implemente este metodo
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_pedidos
   */
   for (auto it = this->m_pedidos.begin(); it != this->m_pedidos.end(); it++){
       delete *it;
   }
}

void Venda::adicionaPedido(Pedido* p) {
  // TODO: Implemente este metodo
  this->m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const {
  // TODO: Implemente este metodo
  /**
   * Aqui voce tem que percorrer a lista de todos os pedidos e imprimir o resumo
   * de cada um. Por ultimo, devera ser exibido o total de venda e a quantidade
   * de pedidos processados.
   */
   int i=1;
   float total=0;
   for (auto it = this->m_pedidos.begin(); it != this->m_pedidos.end(); it++){
       total+=(*it)->calculaTotal();
   }
   for (auto it = this->m_pedidos.begin(); it != this->m_pedidos.end(); it++){
       std::cout<<"Pedido "<<i<<"\n"<<(*it)->resumo()<<std::endl;
       i++;
   }
   printf("Relatorio de Vendas\nTotal de Vendas: R$ %.2f\nTotal de Pedidos: %d",total,i-1);
   //std::cout<<"Relatorio de Vendas\nTotal de Vendas: R$"<<total<<"\nTotal de Pedidos: "<<i-1<<std::endl;
}