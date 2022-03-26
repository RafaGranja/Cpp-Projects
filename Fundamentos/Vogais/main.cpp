#include <iostream>
#include <string>

int main(){
    int vogais[5],i,j;
    char letraMi,letraMa;
    std::string entrada;
    std::cin >> entrada;
    for(i=0;i<5;i++){
        vogais[i]=0;
    }
    for(i=0;i<5;i++){
        switch(i){
            case 0:
                letraMi='a';
                letraMa='A';
                break;
            case 1:
                letraMi='e';
                letraMa='E';
                break;
            case 2:
                letraMi='i';
                letraMa='I';
                break;
            case 3:
                letraMi='o';
                letraMa='O';
                break;
            case 4:
                letraMi='u';
                letraMa='U';
                break;    
        }
        for(j=0;j<entrada.size();j++){
            if(entrada[j]==letraMi || entrada[j]==letraMa){
                vogais[i]++;
            }
        }
        if(vogais[i]>0){
            std::cout << "\n" << letraMi << "  " << vogais[i] <<std::endl;
        }
    }
    return 0;
}