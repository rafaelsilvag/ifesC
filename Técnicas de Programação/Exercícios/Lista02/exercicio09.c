#include<stdio.h>

int main(){
	int num, cont=0;
	float soma=0, media;

	printf("\n\tInforme um valor inteiro e positivo: ");
	scanf("%d",&num);

	// executa o loop até que um número negativo seja digitado
	while(num > 0){
		if(num % 3 == 0){
			// equivale a soma = soma + num
			soma += num;
			cont++;
		}
		printf("\n\tInforme um valor inteiro e positivo: ");
		scanf("%d",&num);
	}

	// verifica se números múltiplos de 3 foram digitados
	if(soma > 0){
		media = soma / cont;
		printf("\n\tA media dos multiplos de 3 eh %0.1f.\n\n", media);
	}
	else
		printf("\n\tNao foram digitados multiplos de 3, por isso a media eh zero!\n\n");
}