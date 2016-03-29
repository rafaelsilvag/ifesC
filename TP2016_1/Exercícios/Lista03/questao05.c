/*
    Lista 03 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 10

void inicializarMatriz(char m[TAM][TAM]){
	int i, j;

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			m[i][j]='L';
		}
	}
}

void gerarBombas(char m[TAM][TAM]){
    int qtdBombas=15;
    int i=0,x,y;

    srand((unsigned)time(NULL));

    while(i<15){
        x = rand() % TAM;
        y = rand() % TAM;
        m[x][y] = 'B';
        i++;
    }
}
void imprimirMatriz(char m[TAM][TAM]){
	int i,j;

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%c ", m[i][j]);
		}
		printf("\n");
	}
}
int main(){
    char campoMinado[TAM][TAM];

    inicializarMatriz(campoMinado);
    gerarBombas(campoMinado);
    imprimirMatriz(campoMinado);
}

