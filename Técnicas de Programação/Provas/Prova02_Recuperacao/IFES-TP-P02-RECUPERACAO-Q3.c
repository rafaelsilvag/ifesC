/*
Professor: Rafael S. Guimaraes
Questao 03 - Prova de Recuperacao 02
Valor: 7,5 pontos
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAM 10

typedef struct profissional {
    char nome[51];
    char profissao[20];
    int idade;
}Profissional; // 1,0 Pontos

void cadastrarProfissionais(Profissional v[TAM]){
    for(i=0;i<TAM;i++){ //2,0 pontos
        printf("Informe o nome: ");
        gets(v[i].nome);
        printf("Informe a profissao: ");
        gets(v[i].profissao);
        printf("Informe a idade: ");
        scanf("%i",&v[i].idade);
        getchar();
    }
}
void exibirProfissionais(Profissional v[TAM]){
    for(i=0;i<TAM;i++){ //2,0 pontos
        printf("----------------------------------\n");
        printf("Nome: %s\n",v[i].nome);
        printf("Profissao: %s\n",v[i].profissao);
        printf("Idade: %i\n", v[i].idade);
    }
    printf("----------------------------------\n")
}

int main(){
    // Declaracao de um vetor de profissionais(10 posicoes)
    Profissional v_profissionais[TAM]; // 1,0 Ponto
    int i;

    // Inserir as informacoes de cada profissional - 0,5 Ponto
    cadastrarProfissionais(v_profissionais);
    //Exibir os profissionais cadastrados - 0,5 Ponto
    exibirProfissionais(v_profissionais);
}
