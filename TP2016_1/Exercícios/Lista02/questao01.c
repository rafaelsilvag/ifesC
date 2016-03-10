/*
    Lista 02 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>

void opcao1(float g){

}
void opcao2(float g){

}
void opcao3(float g){

}
int escolhaOpcoes(){
    int opc;
    printf("###################################\n");
    printf("# 1: A vista 10%% de desconto     #\n");
    printf("# 2: Em duas vezes                #\n");
    printf("# 3: em 3 ou 10 Vezes(3%% a/m)    #\n");
    printf("###################################\n");
    printf("Escolha uma Opcão: ");
    scanf("%i",&opc);

    return opc;
}
int main(){
    float gasto;
    printf("Informe o gasto do cliente: ");
    scanf("%f",&gasto);

    switch(escolhaOpcoes()){
        case 1:
                opcao1(gasto);
                break;
        case 2:
                opcao2(gasto);
                break;
        case 3:
                opcao3(gasto);
                break;
        default:
                printf("Opcao Invalida!");
                break;
    }
}
