#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void inserirDados(int v[MAX]){
	int i,j=0;
	for(i = 1;i<=100;i++){
		if((i%2) == 0){
			v[j] = i;
			j++;
		}
	}
}
void imprimirDados(int v[MAX]){
	int i;
	printf("Valores do vetor: ");
	for(i=0;i<MAX;i++){
		printf("%i ",v[i]);
	}
	printf("\n");
}
int main(){
	//Declaracao das variaveis
	int pares[MAX];
	//Inserir valores
	inserirDados(pares);
	//Imprimir os valores do vetor
	imprimirDados(pares);
}