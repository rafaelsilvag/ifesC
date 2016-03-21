/*
    Lista 03 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void codigoMorse(int valor){
    switch(valor){
        case 1:
            printf(". _ _ _ _ ");
            break;
        case 2:
            printf(". . _ _ _ ");
            break;
        case 3:
            printf(". . . _ _ ");
            break;
        case 4:
            printf(". . . . _ ");
            break;
        case 5:
            printf(". . . . . ");
            break;
        case 6:
            printf("_ . . . . ");
            break;
        case 7:
            printf("_ _ . . . ");
            break;
        case 8:
            printf("_ _ _ . . ");
            break;
        case 9:
            printf("_ _ _ _ . ");
            break;
        case 0:
            printf("_ _ _ _ _ ");
            break;
    }
}
void cadastrarValores(int v[TAM]){
    int i;
    for(i=0;i<TAM;i++){
        printf("Informe um valor: ");
        scanf("%i",&v[i]);
    }
}
void imprimirVetor(int v[10]){
    int i;
    system("cls");
    printf("================== CODIGO MORSE ==================\n");
    for(i=0;i < TAM;i++){
        printf("%i ",v[i]);
    }
    printf("\n");
    for(i=0;i < TAM;i++){
        if(v[i] >= 0 && v[i] <= 9){
            codigoMorse(v[i]);
        }else{
            printf("NULO ");
        }
    }
    printf("\n==================================================\n");
    system("sleep 4");
}
int main(){
    int vInteiros[TAM];

    cadastrarValores(vInteiros);
    imprimirVetor(vInteiros);
}
