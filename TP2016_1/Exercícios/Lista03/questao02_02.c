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
        default:
            printf("NULO ");
            break;
    }

}
void cadastrarValores(int v[TAM]){
    int i;
    system("cls");
    for(i=0;i<TAM;i++){
        printf("Informe um valor: ");
        scanf("%i",&v[i]);
    }
}
void imprimirValores(int v[TAM]){
    int i;
    system("clear");
    printf("=========================== CODIGO MORSE ==========================\n");
    for(i=0;i<TAM;i++){
        printf("%i ",v[i]);
    }
    printf("\n");
    for(i=0;i<TAM;i++){
        codigoMorse(v[i]);
    }
    printf("\n");
    printf("===================================================================\n");
}
int main(){
    //Declaracao das variaveis
    int vInteiros[10];

    cadastrarValores(vInteiros);
    imprimirValores(vInteiros);
}
