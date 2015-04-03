#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4
/*
3. Suponha A uma matriz 4x4.
   Determine a matriz T transposta de A.
   Mostre as duas matrizes no final.
Observacao: T[i][j] = A[j][i].
*/
int main(){
	//Declaracao da matriz
	int A[LIN][COL], T[LIN][COL];
	int i,j;

	//Informar os valores da matriz
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("Informe um valor: ");
			scanf("%i",&A[i][j]);
		}
	}
	//gerar matriz transposta
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			T[i][j] = A[j][i];
		}
	}
	//Imprimir matrizes
	printf("Matriz A\n");
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("| %i ",A[i][j]);	
		}
		printf("|\n");
	}
	printf("Matriz T\n");
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("| %i ",T[i][j]);	
		}
		printf("|\n");
	}
}