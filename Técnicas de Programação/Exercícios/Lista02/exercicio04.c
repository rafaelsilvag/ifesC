#include<stdio.h>

int main(){
	float A, soma=0;
	int B;

	// leitura dos valores
	printf("\n\tInforme um valor real para A: ");
	scanf("%f", &A);

	printf("\n\tInforme um valor inteiro para B: ");
	scanf("%d", &B);

	// executa o laço para chegar ao produto usando adições
	while(B > 0){
		// equivale a soma = soma + B;
		soma += A;
		B--;
	}
	printf("\n\tO produto de A * B, usando somas sucessivas, eh %0.1f\n\n", soma);
}