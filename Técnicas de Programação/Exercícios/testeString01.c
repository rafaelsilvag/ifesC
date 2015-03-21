#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[30];
	int i;

	printf("Informe o nome: ");
	gets(nome);

	printf("O tamanho da string eh: %lu\n",strlen(nome));
}