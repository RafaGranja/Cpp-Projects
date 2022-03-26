#include "celular.hpp"

// TODO: Inicialize aqui sua variavel estatica. Caso tenha optado por essa
// solucao.
unsigned int Celular::cod = 1;

Celular::Celular(std::string modelo,
                 std::string fabricante,
                 int armazenamento,
                 int memoria,
                 double peso,
                 std::string cor,
                 int qtd,
                 float valor) {
  this->modelo=modelo;
  this->fabricante=fabricante;
  this->armazenamento=armazenamento;
  this->memoria=memoria;
  this->peso=peso;
  this->cor=cor;
  this->qtd=qtd;
  this->valor=valor;
  this->codigo=this->cod;
  this->cod++;
}

bool Celular::operator<(const Celular& other) {
  // TODO: Implemente este metodo. 
  // Preste atencao no exemplo que a descricao utilizada na ordenacao considera
  // a fabricante antes do modelo do celular
  if(this->fabricante==other.fabricante){
      return this->modelo < other.modelo;
  }
  else{
      return this->fabricante < other.fabricante;
  }
  
  return false;
}