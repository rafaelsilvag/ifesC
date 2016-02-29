#include <stdio.h>

int main(){
	char frase[51]; //1,0 Ponto
	char frase_sem_espacos[51];
	int i, j, qtd_espacos;

	printf("Digite uma frase: ");
	gets(frase); //1,0 Ponto

	j = 0;
	qtd_espacos = 0;
	for(i=0; frase[i] != '\0'; i++){  //1,0 Ponto
		if(frase[i] != ' '){ // 2,0 Pontos
			frase_sem_espacos[j] = frase[i];
			j++; //1,0 Ponto
		}else{
			qtd_espacos++;
		}
	}
	frase_sem_espacos[j] = '\0'; //1,0 Ponto
	//Apenas para fazer com que a saída desta variável na tela seja formatada corretamente
	printf("\nFrase sem espacos: %s", frase_sem_espacos); //1,0 Ponto
	printf("\nQuantidade de espacos: %d\n\n", qtd_espacos);
}
