#include<stdio.h>

float calcular_soma_matriz(float Matriz_B[][3]){//Não é necessário informar o número de linhas
	float soma = 0;
	int i, j;
	//Somando os elementos da matriz
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(i%2 != 0)
				soma = soma + Matriz_B[i][j];
		}
	}
	return soma;
}

int main(){
	float B[3][3];
	float soma;
	int i, j;
	
	//Lendo os elementos da Matriz
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite o valor para B[%d][%d]:", i, j);
			scanf("%f", &B[i][j]);
		}
	}
	soma = calcular_soma_matriz(B);
	printf("Soma: %f\n\n", soma);
}