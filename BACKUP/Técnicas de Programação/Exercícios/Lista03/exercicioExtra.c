#include <stdio.h>
#include <stdlib.h>

float meupow(float num, int pot){
	// Implementa o pow
	float resultado = 1;
	int i;
	for(i=0;i<pot;i++){
		resultado = resultado * num;
	}
	return resultado;
}

int main(){
	// Declaracao das variaveis
	float num;
	int potencia;
	// Ler os valores de numero e potencia
	printf("\t Informe o numero: ");
	scanf("%f", &num);
	printf("\t Informe a potencia: ");
	scanf("%i", &potencia);
 	// Imprime o resultado
 	system("cls");
	printf("\n\t Resultado: %.2f\n", meupow(num, potencia));
}