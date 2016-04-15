#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

int contaVogais(char f[TAM]){
    int i,j, cont=0;
    char vogais[11] = "aeiouAEIOU";
    for(i=0;f[i]!='\0';i++){
        for(j=0;vogais[j] != '\0';j++){
            if(f[i] == vogais[j]){
                cont++;
                break;
            }
        }
    }
    return cont;
}
void lerFrase(char f[TAM]){
    system("cls");
    printf("Informe uma frase: ");
    gets(f);
}
int main(){
    char frase[TAM];

    lerFrase(frase);

    printf("O numero de vogais eh: %i\n",contaVogais(frase));
}
