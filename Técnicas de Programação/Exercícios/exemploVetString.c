#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIN 10
#define COL 30

int main(){
	char nome_alunos[LIN][COL];
	float notas_alunos[LIN][4];
	int i,j;

	for(i=0;i<LIN;i++){
		printf("Informe o nome do aluno: ");
		gets(nome_alunos[i]);
		for(j=0;j<4;j++){
			printf("Informe a nota: ");
			scanf("%f",&notas_alunos[i][j]);
		}
		getchar();
	}
	for(i=0;i<LIN;i++){
		//Imprimir o nome e media das notas
		printf("Nome: %s\n",nome_alunos[i]);
		
	}
}