/*
    Lista 04 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

int replace(char frase[TAM]){
    int i, cont=0;
    for(i=0;frase[i] != '\0';i++){
        if(frase[i] == ' '){
            frase[i]='-';
            cont++;
        }
    }
    return cont;
}
void lerFrase(char frase[TAM]){
    system("cls");
    printf("Informe uma frase: ");
    gets(frase);
}
int main(){
    char frase[TAM];

    lerFrase(frase);

    printf("Foram realizados %i alteracoes!!\n",replace(frase));
    printf("Frase modificada: %s\n",frase);
}
