/*
 * =====================================================================================
 *
 *       Filename:  teste.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/05/2015 20:23:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rafael S. Guimaraes (GUIMARAES, R. S.), rafaelg@ifes.edu.br
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

typedef struct aluno {
	int id;
	char nome[30];
}Aluno;

void ler(Aluno *alunos){
	Aluno v;
	v = (Aluno *) malloc(2 * sizeof(Aluno));
	int i;
	for(i=0;i<2;i++){
		printf("Dados: ");
		scanf("%i",&v[i].id);
	}
	//alunos = v;
}

void imprimir(Aluno *alunos){
	int i;
	for(i=0;i<2;i++){
		printf("ID: %i\n",alunos[i].id);
	}
}

int main(){
	Aluno *a;
	ler(a);
	imprimir(a);
}
