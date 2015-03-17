#include <stdio.h>
#include <stdlib.h>

int paridade(int v){
	int i;
	int valor, existePar=0, existeImpar=0;
	for(i=1;i <= v;i++){
		printf("Informe o valor: ");
		scanf("%i", &valor);
		if((valor % 2) == 0){
			existePar = 1;
		}else{
			existeImpar = 1;
		}
	}
	if(existeImpar && existePar){
		return -1;
	}else if(existePar){
		return 0;
	}else if(existeImpar){
		return 1;
	}
}

int main(){
	// Declaracao das variaveis
	int numValores, resultado;

	// Informar o numero de valores a serem lidos
	printf("Informe o numero de itens a serem lidos: ");
	scanf("%i", &numValores);

	resultado = paridade(numValores);

	if(resultado == 0){
		printf("Todos os numeros sao pares!\n");
	}else if(resultado == 1){
		printf("Todos os numeros sao impares!\n");	
	}else{
		printf("Existem numeros pares e impares!\n");
	}

}