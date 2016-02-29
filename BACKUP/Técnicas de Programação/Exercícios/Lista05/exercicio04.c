#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int meureplace(char frase[MAX]){
	//substituir todos os espacos por '-'
	int i;
	int qtdSubs=0;
	for(i=0;frase[i] != '\0';i++){
		if(frase[i]==' '){
			frase[i]='-';
			qtdSubs++;
		}
	}
	return qtdSubs;
}
void lerFrase(char frase[MAX]){
	printf("Informe a frase: ");
	gets(frase);
}
int main(){
	//declaracao de variaveis
	char frase[MAX];
	int qtdSubs;

	lerFrase(frase);
	
	qtdSubs = meureplace(frase);

	printf("O numero de substituicoes na frase foi: %i\n",qtdSubs);
	printf("Frase modificada: %s\n",frase);
}