#include<stdio.h>

int main(){
	float n1, n2, media;

	printf("\n\tInforme a 1a nota bimestral: ");
	scanf("%f", &n1);

	printf("\n\tInforme a 2a nota bimestral: ");
	scanf("%f", &n2);

	// calcula a média bimestral
	media = (n1 + n2)/2;

	// verifica a situação do aluno
	if(media >= 7)
		// %0.1f apresenta a média com uma casa decimal
		printf("\n\tVoce foi Aprovado pois sua media eh %0.1f!\n\n", media);
	else if(media < 3)
		// %0.1f apresenta a média com uma casa decimal
		printf("\n\tVoce foi Reprovado pois sua media eh %0.1f!\n\n", media);
	else
		// %0.1f apresenta a média com uma casa decimal
		printf("\n\tVoce deve fazer o Exame Final pois sua media eh %0.1f!\n\n", media);
}