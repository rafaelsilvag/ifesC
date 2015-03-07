#include<stdio.h>

int main(){
	int maior, menor, num;
	int cont=0;
	float soma=0, media;

	maior = -32000;
	menor = 32000;

	do{
		printf("\n\tInforme um numero: ");
		scanf("%d", &num);
		
		// garante que zero não seja o maior ou menor
		if(num){ //mesmo que if (num != 0)
			// encontra o maior
			if(num > maior){
				maior = num;

		
			// encontra o menor
			if(num < menor)
				menor = num;

			// equivale a soma = soma + num;
			soma += num;
			cont++;
		}
	}while(num != 0);

	// calcula a média dos valores digitados
	media = soma / cont;

	printf("\n\tA media dos valores digitados eh %0.1f.\n\tO maior valor eh %d.\n\tO menor valor eh %d.\n\n", media, maior, menor);
}