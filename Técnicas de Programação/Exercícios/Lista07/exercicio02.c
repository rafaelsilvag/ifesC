#include<stdio.h>

void mostrar_matriz_alterada(float Matriz_A[][4]){//Não é necessário informar o número de linhas
	float maior_dp = 0;
	int i, j;
	
	//Encontrado maior elemento da diagonal principal
	for(i=0; i<4; i++){
		if (Matriz_A[i][i] > maior_dp){
			maior_dp = Matriz_A[i][i];
		}	
	}

	//Dividindo os elementos da matriz pelo maior elemento da diagonal principal
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			Matriz_A[i][j] = Matriz_A[i][j] / maior_dp;
		}
	}

	//Mostrando a matriz após modificação
	for(i=0; i<4; i++){
		printf("\n");
		for(j=0; j<4; j++){
			printf("%0.2f ", Matriz_A[i][j]);
		}
	}
	printf("\n\n");
}

int main(){
	float A[4][4];
	float soma;
	int i, j;

	//Lendo os elementos da Matriz
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Digite o valor para A[%d][%d]:", i, j);
			scanf("%f", &A[i][j]);
		}
	}
	mostrar_matriz_alterada(A);
}