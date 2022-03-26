#include <iostream>
int main(){
    int i;

    // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
    int a=10;

    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *b=0;

    // 3) Declare um vetor de inteiros e inicialize com valores de 9 a 0 (nessa ordem)
    int c[10]={9,8,7,6,5,4,3,2,1,0};

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    std::cout << &a << std::endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    std::cout << a << std::endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    std::cout << &b << std::endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)
    std::cout << b << std::endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    std::cout << &c << std::endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    std::cout << &c[0] << std::endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    std::cout << c[0] << std::endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    b=&a;

    // 12) Imprima o VALOR da variável declarada em (2)
    std::cout << b << std::endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *b << std::endl;

    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do VALOR de (2)
    std::cout << (b==&a) << std::endl;

    // 15) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *b=5;

    // 16) Imprima o VALOR da variável declarada em (1)
    std::cout << a << std::endl;

    // 17) Atribua o ENDEREÇO da variável (3) à variável declarada em (2)
    b=c;

    // 18) Imprima o VALOR da variável declarada em (2)
    std::cout << b << std::endl;

    // 19) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *b << std::endl;

    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    b=&c[0];

    // 21) Imprima o VALOR da variável declarada em (2)
    std::cout << b << std::endl;

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *b << std::endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for(i=0;i<10;i++){
        b[i]*=10;
    }

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for(i=0;i<10;i++){
        if(i<9){
        std::cout << b[i] << " ";}
        else{
            std::cout << b[i];
        }
    }
    std::cout << std::endl;

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    for(i=0;i<10;i++){
        if(i<9){
        std::cout << *(c+i) << " ";}
        else{
            std::cout << *(c+i);
        }
    }
    std::cout << std::endl;

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    for(i=0;i<10;i++){
        if(i<9){
        std::cout << *(b+i) << " ";}
        else{
            std::cout << *(b+i);
        }
    }
    std::cout << std::endl;  

    // 27) Atribua o ENDEREÇO da quinta posição de (3) à variável declarada em (2)
    b=&c[4];

    // 28) Imprima o VALOR da variável declarada em (2)
    std::cout << b << std::endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *b << std::endl;

    // 30) Imprima o VALOR guardado no ENDEREÇO do ponteiro (2) decrementado de 4
    std::cout << *(b-4) << std::endl;

    // 31) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **d=&b;

    // 32) Imprima o VALOR da variável declarada em (31)
    std::cout << d << std::endl;

    // 33) Imprima o ENDEREÇO da variável declarada em (31)
    std::cout << &d << std::endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO apontado por (31)
    std::cout << *d << std::endl;

    // 35) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (31)
    std::cout << **d << std::endl;
    
    return 0;
}