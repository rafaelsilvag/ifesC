#include <stdio.h>
#include <stdlib.h>

int main(){
	// Declaracao das variaveis
	float notas[5];
	float soma = 0;
	int i;
	//Ler as notas
	for(i=0;i<5;i++){
		printf("Informe o valor da nota: ");
		scanf("%f", &notas[i]);
		soma = soma + notas[i];
	}
	for(i=0;i<5;i++){
		printf("Nota: %.2f\n", notas[i]);
	}
	printf("Media das notas: %.2f\n",(soma/5));
}