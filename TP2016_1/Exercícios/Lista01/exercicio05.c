#include<stdio.h>

int main(){
	int num;

	// leitura do número
	printf("\n\tInforme um valor inteiro: ");
	scanf("%d", &num);

	// verifica em que situação o valor se encaixa
	if(num == 5)
		printf("\n\tO numero informado eh igual a 5\n\n");
	else if(num == 200)
		printf("\n\tO numero informado eh igual a 200\n\n");
	else if(num == 400)
		printf("\n\tO numero informado eh igual a 400\n\n");
	else if((num >= 500) && (num<= 1000))
		printf("\n\tO numero informado esta no intervalo entre 500 e 1000\n\n");
	else
		printf("\n\tO numero informado nao eh igual a 5, ou a 200, ou a 400 e nem esta no intervalo entre 500 e 1000\n\n");
}