#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void verificarPalavras(char p1[MAX], char p2[MAX]){
	// funcao para verificar palavras sao iguais
	int tamP1, tamP2;
	if(strcmp(p1, p2) == 0){
		printf("As palavras sao iguais!\n");
	}else{
		tamP1 = strlen(p1);
		tamP2 = strlen(p2);
		if(tamP1 > tamP2){
			printf("A primeira palavra tem o maior comprimento!\n");
		}else if(tamP2 > tamP1){
			printf("A segunda palavra tam o maior comprimento!\n");
		}else if(tamP1 == tamP2){
			printf("As palavras possuem apenas o mesmo tamanho!\n");
		}
	}
}
void ler2Palavras(char p1[MAX], char p2[MAX]){
	//Funcao para ler 2 palavras
	printf("Informe a primeira palavra: ");
	gets(p1);
	printf("Informe a segunda palavra: ");
	gets(p2);
}

int main(){
	//Declaracao das variaveis
	char palavra1[MAX], palavra2[MAX];
	ler2Palavras(palavra1, palavra2);
	verificarPalavras(palavra1, palavra2);
	return 0;
}