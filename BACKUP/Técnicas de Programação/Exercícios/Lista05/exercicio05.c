#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void gerarAbreviatura(char nome_completo[MAX], char abreviatura[MAX]){
	int i,j=0,k=0;
	char nome[MAX];

	for(i = 0; nome_completo[i] != '\0';i++){
		if(nome_completo[i] != ' '){
			nome[j] = nome_completo[i];
			j++;
		}else{
			abreviatura[k] = nome[0];
			k++;
			abreviatura[k] = '.';
			k++;
			j = 0;
		}
	}
}
void lerNome(char nome_completo[MAX]){
	printf("Informe o nome completo: ");
	gets(nome_completo);
	strcat(nome_completo, " ");
}

int main(){
	//Declaracao das variaveis
	char nome_completo[MAX], abreviatura[MAX]="";

	lerNome(nome_completo);
	gerarAbreviatura(nome_completo, abreviatura);

	printf("Nome: %s\n",nome_completo);
	printf("Abreviatura: %s\n",abreviatura);
}