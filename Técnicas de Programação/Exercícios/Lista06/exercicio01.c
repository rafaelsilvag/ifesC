#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 5
/*
Seja R uma matriz 4X5. 
Faca um algoritmo para ler os elementos 
da matriz e posteriormente determinar 
o maior elemento de R e a sua posicao.
*/
int main(){
	int R[LIN][COL];
	int i,j,posicaoX, posicaoY, maiorValor;
	//Ler os valores do ususario
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("Informe um valor: ");
			scanf("%i",&R[i][j]);
		}
	}
	//calcular o maior valor e sua posicao na matriz
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			if((i==0) && (j==0)){
				maiorValor = R[i][j];
				posicaoX = i;
				posicaoY = j;
			}else if(R[i][j] > maiorValor){
				maiorValor = R[i][j];
				posicaoX = i;
				posicaoY = j;
			}
		}
	}

	printf("Valor: %i\n",maiorValor);
	printf("Posicao X,Y: %i,%i\n",posicaoX, posicaoY);
}