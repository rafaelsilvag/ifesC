/*
Professor: Rafael S. Guimaraes
Questao 01 - Prova de recuperacao 01
Valor: 7,5 pontos
*/
#include <stdio.h>
#define maxTam 10

int main(){
	int Matriz[maxTam][maxTam]; // 1,0 Ponto
	int i, j;

	//Lendo os elementos da Matriz Matriz
	for(i=0; i<maxTam; i++){ //1,0 Ponto
		for(j=0; j<maxTam; j++){ //1,0 Ponto
			printf("Digite o valor para Matriz[%d][%d]:", i, j);
			scanf("%d", &Matriz[i][j]);//1,0 Ponto
		}
	}

	//Verificando os numeros pares da diagonal principal da Matriz
	printf("\n\nMostrando os pares da diagonal principal...\n");
	for(i=0; i<maxTam; i++){//1 Ponto
		if (Matriz[i][i] % 2 == 0){ //1 Ponto
			printf("%d\n", Matriz[i][i]); //1,0 Ponto
		}
	}
}
