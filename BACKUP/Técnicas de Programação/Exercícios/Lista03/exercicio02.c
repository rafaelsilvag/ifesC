#include <stdio.h>
#include <stdlib.h>

void maiormenor(int *a, int *b, int *c){
	//Verificar qual eh o maior e menor numero
	if((*a > *b) && (*a > *c)){
		if(*b < *c){
			printf("Maior eh o A\n");
			printf("Menor eh o B\n");
		}else{
			printf("Maior eh o A\n");
			printf("Menor eh o C\n");	
		}
	}else if((*b > *a) && (*b > *c)){
		if(*a < *c){
			printf("Maior eh o B\n");
			printf("Menor eh o A\n");
		}else{
			printf("Maior eh o B\n");
			printf("Menor eh o C\n");	
		}
	}else{
		if(*a < *b){
			printf("Maior eh o C\n");
			printf("Menor eh o A\n");
		}else{
			printf("Maior eh o C\n");
			printf("Menor eh o B\n");	
		}		
	}
}

int main(){
	// Declaracao das variveis
	int a,b,c;

	//Recebendo os valores do usuario
	printf("Insira o valor de A: ");
	scanf("%i", &a);
	printf("Insira o valor de B: ");
	scanf("%i", &b);
	printf("Insira o valor de C: ");
	scanf("%i", &c);

	//Definindo quem eh o maior e o menor valor
	maiormenor(&a, &b, &c);

	return 0;
}
