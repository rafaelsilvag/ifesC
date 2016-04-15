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

int contaVogais(char f[TAM]){
    // Funcao que retorna o numero de vogais
    // em uma determinada frase
    int i, j, cont=0;
    char vogais[11] = "aeiouAEIOU";

    for(i=0; f[i] != '\0';i++){
        for(j=0; vogais[j] != '\0';j++){
            if(f[i] == vogais[j]){
                cont++;
                break;
            }
        }
    }
    return cont;
}
void lerFrase(char f[TAM]){
    // Funcao para ler uma frase do usuario
    system("cls");
    printf("Informe uma frase: ");
    gets(f);
}
int main(){
    //declaracao das variaveis
    char frase[TAM];

    lerFrase(frase);
}
