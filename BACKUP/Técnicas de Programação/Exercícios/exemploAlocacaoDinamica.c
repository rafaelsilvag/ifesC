/*
 * =====================================================================================
 *
 *       Filename:  exemploAlocacaoDinamica.c
 *
 *    Description:  Exemplo Alocacao Dinamica
 *
 *        Version:  1.0
 *        Created:  08/05/2015 19:51:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rafael S. Guimaraes (GUIMARAES, R. S.), rafaelg@ifes.edu.br
 *   Organization:  IFES
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct aluno {
    char nome[30];
    int idade;
    char telefone[15];
    char cpf[11];
};

int main(){
    //Declaracao de variaveis
    struct aluno *alunos;
    int qtd_alunos,i;

    // Informa a quantidade de alunos para  realizar o cadastro
    printf("Informe a qtd de alunos: ");
    scanf("%i",&qtd_alunos);
    getchar();
    // Aloca recursos utilizando a quantidade de alunos
    // informados pelo usuario
    alunos = (struct aluno *) malloc(qtd_alunos * sizeof(struct aluno));
    // Cadastro dos alunos
    for(i=0;i<qtd_alunos;i++){
        printf("Informe o nome do alunos: ");
        gets(alunos[i].nome);
        printf("Informe o telefone: ");
        gets(alunos[i].telefone);
        printf("Informe o CPF: ");
        gets(alunos[i].cpf);
        printf("Informe a idade: ");
        scanf("%i",&alunos[i].idade);
        getchar();
    }
    //Exibe Informacoes dos alunos
    for(i=0;i<qtd_alunos;i++){
        printf("Nome: %s\n",alunos[i].nome);
        printf("CPF: %s\n",alunos[i].cpf);
        printf("Telefone: %s\n",alunos[i].telefone);
        printf("Idade: %i\n",alunos[i].idade);
    }
}









