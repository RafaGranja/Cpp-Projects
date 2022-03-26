#include "pizza.hpp"

std::string Pizza::descricao() const {
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada da pizza.
   *
   * Exemplos:
   * 2X Pizza Calabresa, 4 pedacos e borda recheada.
   * 2X Pizza Calabresa, 4 pedacos sem borda recheada.
   */
   std::string descricao="";
   std::string conjuncao="";
   int qtd=this->getQtd();
   if(this->borda_recheada==1){
       conjuncao="e";
   }
   else{
       conjuncao="e sem";
   }
   descricao+=std::to_string(qtd);
   descricao+="X Pizza ";
   descricao+=this->sabor;
   descricao+=", ";
   descricao+=std::to_string(this->pedacos);
   descricao+=" pedacos ";
   descricao+=conjuncao;
   descricao+=" borda recheada.";
   
  return descricao;
}

Pizza::Pizza(const std::string& sabor,
             int pedacos,
             bool borda_recheada,
             int qtd,
             float valor_unitario) {
  this->sabor=sabor;
  this->pedacos=pedacos;
  this->borda_recheada=borda_recheada;
  this->m_qtd=qtd;
  this->m_valor_unitario=valor_unitario;
}