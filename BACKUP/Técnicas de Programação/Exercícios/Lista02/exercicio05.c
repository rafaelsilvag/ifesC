#include<stdio.h>

int main(){
	int N, i=0;
	long int fat=1;

	printf("\n\tInforme um numero: ");
	scanf("%d", &N);

	if(N > 0){
		// calcula o fatorial do número
		while(i < N){
			fat = fat * (N - i);
			i++;
		}
	}
	printf("\n\tFatorial de %d eh %d.\n\n", N, fat);
}