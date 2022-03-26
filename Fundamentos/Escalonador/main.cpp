// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_escalonador.hpp"


using namespace std;

int main() {
    char comando;
    int id=0,prioridade=0;
    string nome=" ";
    ListaProcessos* Lista= new ListaProcessos;
    Processo* proc= new Processo(id, nome, prioridade);
    while (cin >> comando){
        if(comando=='a'){
            cin >> id >> nome >> prioridade;
            Lista->adicionar_processo(new Processo(id, nome, prioridade));
        }
        else if(comando=='m'){
            proc= Lista->remover_processo_maior_prioridade();
        }
        else if(comando=='n'){
            proc= Lista->remover_processo_menor_prioridade();
        }
        else if(comando=='r'){
            cin >> id;
            proc= Lista->remover_processo_por_id(id);
        }
        else if(comando=='p'){
            Lista->imprimir_lista();
        }
        else if(comando=='b'){
            avaliacao_basica();
        }
    
    };
    
    delete Lista;
    delete proc;
    return 0;
}