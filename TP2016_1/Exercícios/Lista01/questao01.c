/*
    Lista 01 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>

void categoria(int idade){

    printf("\t\t\tCategoria: ");
    if(idade >= 5 && idade <= 7){
        printf("Infantil A\n")
    }else if(idade >= 8 && idade <= 10){
        printf("Infantil B\n");
    }else if(idade >= 11 && idade <= 13){
        printf("Juvenil A\n");
    }else if(idade >= 14 && idade <= 17){
        printf("Juvenil B\n");
    }else if(idade >= 18){
        printf("Adulto\n");
    }else{
        printf("Sem categoria!\n");
    }
}

int main(){
    // declaracao das variaveis
    int idade;
    // Cadastra a idade do atleta
    printf("Informe a idade: ");
    scanf("%d",&idade);
    // Informa a categoria
    system("cls");
    categoria(idade);
}
