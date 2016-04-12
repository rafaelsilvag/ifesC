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
void gerarAbreviatura(char nc[TAM], char abrev[TAM]){
    int i,k=0,j=0;
    char palavra[TAM] = "";
    for(i=0;nc[i] != '\0';i++){
        if(nc[i] != ' '){
            palavra[k] = nc[i];
            k++;
        }else{
            k=0;
            abrev[j]=palavra[0];
            j++;
            abrev[j]='.';
            j++;
        }
    }
    abrev[j]='\0';
}
void lerNomeCompleto(char nc[TAM]){
    system("cls");
    printf("Informe o nome completo: ");
    gets(nc);
    strcat(nc, " ");
}
int main(){
    char nomeCompleto[TAM], abreviatura[TAM];

    lerNomeCompleto(nomeCompleto);
    gerarAbreviatura(nomeCompleto, abreviatura);
    printf("Nome completo: %s\n", nomeCompleto);
    printf("Abreviatura: %s\n", abreviatura);
}
