#include "hamburguer.hpp"

std::string Hamburguer::descricao() const {
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada do Hamburguer.
   *
   * Exemplos:
   * 1X Hamburguer X-tudo artesanal.
   * 1X Hamburguer X-tudo simples.
   */
   std::string descricao="";
   std::string conjuncao="";
   int qtd=this->getQtd();
   if(this->artesanal==1){
       conjuncao=" artesanal.";
   }
   else{
       conjuncao=" simples.";
   }
   descricao+=std::to_string(qtd);
   descricao+="X Hamburguer ";
   descricao+=this->tipo;
   descricao+=conjuncao;
   
  return descricao;
}

Hamburguer::Hamburguer(const std::string& tipo,
                       bool artesanal,
                       int qtd,
                       float valor_unitario) {
  // TODO: Implemente este metodo.
  this->tipo=tipo;
  this->artesanal=artesanal;
  this->m_qtd=qtd;
  this->m_valor_unitario=valor_unitario;
}