#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int contaVogais(char v[MAX]){
	int i,j, numVogais=0;
	char vogais[11] = "aeiouAEIOU";
	for(i=0;v[i]!='\0';i++){
		for(j=0; vogais[j] != '\0';j++){
			if(v[i] == vogais[j]){
				numVogais++;
				break;
			}
		}
	}
	return numVogais;
}

int main(){
	// Declaracao das variaveis
	char frase[MAX];

	// Informa a frase 
	printf("Informa uma frase: ");
	gets(frase);

	//Imprime o numero de vogais da frase
	printf("A frase tem %i vogais.\n", contaVogais(frase));
}