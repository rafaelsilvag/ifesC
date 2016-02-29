#include<stdio.h>

int main(){
	int dia;

	printf("\n\tInforme um numero inteiro: ");
	scanf("%d", &dia);

	// testa o conteúdo da variável dia
	switch(dia){
		case 1:
			printf("\n\tVoce digitou o numero correspondente ao Domingo.\n\n");
		break;
		case 2:
			printf("\n\tVoce digitou o numero correspondente a Segunda-feira.\n\n");
		break;
		case 3:
			printf("\n\tVoce digitou o numero correspondente a Terca-feira.\n\n");
		break;
		case 4:
			printf("\n\tVoce digitou o numero correspondente a Quarta-feira.\n\n");
		break;
		case 5:
			printf("\n\tVoce digitou o numero correspondente a Quinta-feira.\n\n");
		break;
		case 6:
			printf("\n\tVoce digitou o numero correspondente a Sexta-feira.\n\n");
		break;
		case 7:
			printf("\n\tVoce digitou o numero correspondente ao Sabado.\n\n");
		break;
		default:
			printf("\n\tVoce digitou um numero que nao corresponde a um dia da semana.\n\n");
		break;
	}
}