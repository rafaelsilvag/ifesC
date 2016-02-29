#include <stdio.h>
#include <stdlib.h>

void valoresVetor(int vetor[100]){
	//Implementacao da insercao dos valores
	int i,j=0;
	for(i=100;i>=1;i--){
		vetor[j] = i;
		j++;
	}
}
void imprimirValores(int vetor[100]){
	//Imprimir os valores de um vetor
	int i;
	printf("Valores do vetor: ");
	for(i=0;i<100;i++){
		printf("%.2f ",(vetor[i]/2.0));
	}
	printf("\n");
}
int main(){
	// Declaracao das variaveis
	int valores[100];
	// Inserir os valores no vetor
	valoresVetor(valores);
	// Imprimir os valores do vetor
	imprimirValores(valores);
}