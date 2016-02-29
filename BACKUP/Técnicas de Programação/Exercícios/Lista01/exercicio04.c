#include<stdio.h>

int main(){
	int x;

	printf("\n\tInforme um valor inteiro: ");
	scanf("%d", &x);

	// verifica se o número é divisível por 2
	if((x % 2) == 0){
		printf("\n\t%d eh divisivel por 2", x);
		// se é divisível por 2 e por 5, será também por 10
		if((x % 5) == 0)
			printf(", por 5");

		printf("\n\n");
	}
	// verificar se é divisível por 5, somente
	else if((x % 5) == 0){
		printf("\n\t%d eh divisivel por 5\n\n", x);
	}
	else
		printf("\n\t%d NAO eh divisivel por 2, 5 ou 10\n\n", x);
}