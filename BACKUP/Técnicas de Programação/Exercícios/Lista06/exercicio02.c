#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4
/*
2. Faca um programa que calcule a media 
dos elementos da diagonal principal de 
uma matriz 4X4 de inteiros.
*/
int main(){
	//Declaracao das variaveis
	int matriz[LIN][COL];
	int i,j,soma=0;
	float media;

	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("Informe o valor: ");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			if(i==j){
				soma = soma + matriz[i][j];
			}
		}
	}
	media = soma / LIN;
	printf("Media diagonal principal: %.2f\n",media);
}