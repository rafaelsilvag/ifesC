/*
 * =====================================================================================
 *
 *       Filename:  exercicio02.c
 *
 *    Description:  2. Considerando o exercicio 1, 
 						criar uma variavel que e 
 						um vetor da estrutura aluno. 

 						O programa deve obter o nome 
 						e a idade de 10 alunos. Depois, 
 						estes dados devem ser exibidos.
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
	struct aluno alunos[10];
	int i;

	for(i=0;i<10;i++){
		printf("Informe o nome: ");
		gets(alunos[i].nome);
	
		printf("Informe a idade: ");
		scanf("%i",&alunos[i].idade);
		getchar();
	}

	for(i=0;i<10;i++){
		printf("Nome: %s\nIdade: %i\n",alunos[i].nome,alunos[i].idade);
	}		
}














