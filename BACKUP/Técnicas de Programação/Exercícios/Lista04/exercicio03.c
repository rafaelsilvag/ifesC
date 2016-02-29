#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 10

void quadradoImpar(float v[MAX]){
	int i, pos=0;
	for(i=1;i <= 20;i++){
		// Verificar se o numero eh impar
		if((i % 2) != 0){
			//Armazena na posicao o quadrado do numero
			v[pos] = pow(i,2);
			pos++;
		}
	}
}
void imprimirVetor(float v[MAX]){
	// Imprimir os valores contidos no vetor
	int i;
	for(i=0;i<MAX;i++){
		printf("Posicao %i valor: %.1f\n",i,v[i]);
	}
}
int main(){
	//Declaracao das variaveis
	float vImpares[MAX];
	// Armazenar quadrado de valores impares
	quadradoImpar(vImpares);
	//Imprimir os valores
	imprimirVetor(vImpares);
	return 0;
}