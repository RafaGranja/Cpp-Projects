// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_alocacao.hpp"
#include "QuadroAlocacao.hpp"

using namespace std;

int main() {
    char comando;
    QuadroAlocacao Quadro;
    string codigo,nome,dia,horario,sala;
    vector<Disciplina> vetor;
    while (cin >> comando){
        if(comando=='a'){
            cin >> codigo >> nome >> dia >> horario >> sala;
            Quadro.inserir_alocacao(codigo,nome,dia,horario,sala);
        }
        else if(comando=='m'){
            vetor=Quadro.recuperar_disciplinas_mais_ofertadas();
            for(Disciplina dis : vetor) {
                dis.imprimir_alocacao();
            }
        }
        else if(comando=='r'){
            cin >> codigo >> horario;
            Quadro.remover_alocacao_disciplina(codigo, horario);
        }
        else if(comando=='p'){
            Quadro.imprimir_alocacao_completa();
        }
        else if(comando=='b'){
            avaliacao_basica();
        }
    };
    
    return 0;
}