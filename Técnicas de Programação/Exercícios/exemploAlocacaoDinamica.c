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
struct aluno {
    char nome[30];
    int idade;
    char telefone[15];
    char cpf[11];
};

int main(){
    struct aluno *alunos;
    int qtd_alunos;

    printf("Informe a qtd de alunos: ");
    scanf("%i",&qtd_alunos);


}









