/*
 * =====================================================================================
 *
 *       Filename:  exercicio01.c
 *
 *    Description:  1. Criar uma estrutura chamada aluno, que armazena o nome e idade de um aluno. 
 *                     Na funcao main: criar uma variavel que e uma estrutura aluno; 
 *                     ler o nome e a idade de um aluno e armazenar na variavel criada; 
 *                     exibir na tela o nome do aluno, e a idade do aluno.
 *
 *        Version:  1.0
 *        Created:  29/04/2015 18:54:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rafael S. Guimaraes (rafaelg@ifes.edu.br), 
 *   Organization:  IFES
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct aluno {
	char nome[30];
	int idade;
};

int main(){
	struct aluno alu01;

	printf("Informe o nome: ");
	gets(alu01.nome);
	
	printf("Informe a idade: ");
	scanf("%i",&alu01.idade);

	printf("Nome: %s\nIdade: %i\n",alu01.nome,alu01.idade);
}














