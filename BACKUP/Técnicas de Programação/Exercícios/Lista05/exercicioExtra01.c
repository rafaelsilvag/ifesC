#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void toUpperCase(char vs[MAX]){
	int i,j;
	char slowercase[MAX] = "abcdefghijklmnopqrstuvwxyz";
	char suppercase[MAX] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for(i=0;vs[i] != '\0';i++){
		for(j=0;slowercase[j] != '\0';j++){
			if(vs[i] == slowercase[j]){
				vs[i] = suppercase[j];
				break;
			}
		}
	}
}
void toLowerCase(char vs[MAX]){
	int i,j;
	char slowercase[MAX] = "abcdefghijklmnopqrstuvwxyz";
	char suppercase[MAX] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for(i=0;vs[i] != '\0';i++){
		for(j=0;suppercase[j] != '\0';j++){
			if(vs[i] == suppercase[j]){
				vs[i] = slowercase[j];
				break;
			}
		}
	}
}
int meustrlen(char vs[MAX]){
	int i, qtdCaracteres=0;
	// Calcular o numero de caracteres da frase
	for(i=0;vs[i]!='\0';i++){
		qtdCaracteres++;
	}
	return qtdCaracteres;
}

void lerString(char vs[MAX]){
	printf("Informe uma frase: ");
	gets(vs);
}

int main(){
	//Declaracao de variaveis
	char frase[MAX];

	//Ler a string e imprimir.
	lerString(frase);
	printf("Antes: %s\n",frase);

	//Modificar a string para caixa alta
	toUpperCase(frase);
	printf("Depois(UpperCase): %s\n",frase);

	//Modificar a string para caixa baixa
	toLowerCase(frase);
	printf("Depois(LowerCase): %s\n",frase);
	// Imprime a quantidade de caracteres que contem na frase
	printf("Quantidade de caracteres: %i\n",meustrlen(frase));

} 