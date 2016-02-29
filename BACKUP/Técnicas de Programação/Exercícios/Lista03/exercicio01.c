#include <stdio.h>
#include <stdlib.h>
// Funcao que calcula o fatorial
int fatorial(int num){
	int i, fat = 1;
	if(num == 0 ){
		return 0;
	}else if(num > 0){
		for(i = num ; i >= 1 ; i--){
			fat = fat * i;
		}
		return fat;
	}else{
		return -1;
	}
}
int main(){
	// Declaracao das variaveis
	int numero, res;
	// Receber o numero do usuario
	printf("Informe um numero: ");
	scanf("%i", &numero);
	//Calcular o fatorial
	res = fatorial(numero)
	if(res == -1){
		printf("Nao eh possivel calcular o fatorial!!\n");
	}else{
		// Imprime o valor de fatorial
		printf("O fatorial do numero eh: %i\n", res);	
	}
}