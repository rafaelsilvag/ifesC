#include<stdio.h>

int main(){
	int num, i = 1;

	printf("\nInforme o numero de termos da serie: ");
	scanf("%d", &num);

	for(i=1; i <= num; i++){
		printf("%i ", i*i);
	}
	printf("\n");
}