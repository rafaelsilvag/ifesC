#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3
/*
4. Verifique se A e uma matriz de permutacao. 
Uma matriz de permutacao e uma matriz quadrada cujos 
elementos sao 0's ou 1's, tal que em cada linha e em 
cada coluna exista um, e apenas um, elemento igual a 1. 
Considere uma A como uma matriz 3 x 3. 
Exemplo: A matriz abaixo representa uma matriz de permutacao:
| 0 1 0 | 
| 1 0 0 | 
| 0 0 1 |
*/
int verPermutacao(int m[LIN][COL]){
	// Retorna 1 se for uma matriz de permutacao 
	// e 0 caso nao seja uma matriz de permutacao
	int i,j,cont;
	for(i=0;i<LIN;i++){
		cont = 0;
		for(j=0;j<COL;j++){
			if((m[i][j] != 0)&&(m[i][j]!= 1)){
				return 0;
			}else if(m[i][j]== 1){
				cont++;
			}
		}
		if(cont != 1){
			return 0;
		}
	}
	return 1;
}
void lerMatriz(int m[LIN][COL]){
	int i,j;
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("Informe o valor da posicao %i,%i: ", i,j);
			scanf("%i",&m[i][j]);
		}
	}
	for(i=0;i<LIN;i++){
		printf("|");
		for(j=0;j<COL;j++){
			printf(" %i ", m[i][j]);
		}
		printf("|\n");
	}
}
int main(){
	int m[LIN][COL];
	// Chama a funcao para ler a matriz
	lerMatriz(m);
	// Verifica se a matriz eh uma matriz de permutacao
	if(verPermutacao(m) == 1){
		printf("Eh uma matriz de permutacao...\n");
	}else{
		printf("Nao eh uma matriz de permutacao...\n");
	}
}