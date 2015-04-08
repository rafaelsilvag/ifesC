#include <stdio.h>
#include <stdlib.h>
#define TAM 6

void lerMatrizDistancias(int m[TAM][TAM], char c[6][30]){
	int i,j;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(i==j){
				m[i][j] = 0;
			}else{
				printf("Informe a distancia entre %s e %s: ",c[i],c[j]);
				scanf("%i",&m[i][j]);
			}
		}
	}
}
void lerVetorRotas(int v[TAM]){
	int i;
	for(i=0;i<TAM;i++){
		printf("Informe a rota %i: ", i);
		scanf("%i",&v[i]);
	}
}
void imprimirMatriz(int m[TAM][TAM]){
	int i,j;
	for(i=0;i<TAM;i++){
		printf("| ");
		for(j=0;j<TAM;j++){
			printf("%i ",m[i][j]);
		}
		printf("|\n");
	}
}
void imprimirVetor(int v[TAM], char c[6][30]){
	int i, pos;
	printf("| ");
	for(i=0;i<TAM;i++){
		printf("%i ",v[i]);
		printf("| ");
	}
	printf("\n");
	printf("| ");
	for(i=0;i<TAM;i++){
		pos = v[i];
		printf("%s ",c[pos]);
		printf("| ");
	}
	printf("\n");
}
int calcularDistancia(int md[TAM][TAM], int vr[TAM]){
	int i,distancia =0;
	for(i=0;i<5;i++){
		distancia = distancia + md[vr[i]][vr[i+1]];
	}
	return distancia;
}
int main(){
	char cidades[6][30] = {"Caxu", "Jer Monteiro", "Iconha", "Guacui", "Alegre", "Rio Novo" };
	int matDistancias[TAM][TAM];
	int vetRotas[TAM];
	int distancia;

	lerMatrizDistancias(matDistancias, cidades);
	imprimirMatriz(matDistancias);
	lerVetorRotas(vetRotas);
	imprimirVetor(vetRotas, cidades);
	distancia = calcularDistancia(matDistancias, vetRotas);

	printf("Distancia eh: %i\n",distancia);
}