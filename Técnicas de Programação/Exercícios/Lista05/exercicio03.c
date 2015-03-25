#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void lerFrasePalavra(char frase[MAX], char palavra[MAX]){
	// Ler a frase e a substring
	printf("Informe a frase: ");
	gets(frase);

	printf("Informe a palavra: ");
	gets(palavra);

}

int contarPalavras(char frase[MAX], char palavra[MAX]){
	// Contar o numero de palavras
	int tamFrase, tamPalavra;
	int i,j=0,qtdPalavras=0,cont=0;

	tamFrase = strlen(frase);
	tamPalavra = strlen(palavra);
	for(i = 0; i <tamFrase;i++){
		if(cont == tamPalavra){
			qtdPalavras++;
			cont = 0;
			j = 0;
		}
		if(frase[i] == palavra[j]){
			cont++;
			j++;
		}else{
			i = i - cont;
			cont = 0;
			j = 0;
		}
	}

	return qtdPalavras;
}

int main(){
	char frase[MAX], palavra[MAX];
	int qtdPalavras;

	lerFrasePalavra(frase, palavra);

	qtdPalavras = contarPalavras(frase, palavra);
	printf("O numero de vezes que a palavra %s aparece eh: %i\n",palavra,qtdPalavras);

	return 0;
}