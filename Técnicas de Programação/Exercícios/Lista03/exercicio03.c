#include <stdio.h>

// Funcao que retorna em cm o numero de polegadas
float pol2cm(float pol){
	return (pol * 2.54);
}

int main(){
	// Declaracao das variaveis
	float polegadas, res;
	printf("Informe o numero de polegadas: ");
	scanf("%f",&polegadas);
	// Calcula o valor de polegadas para cm
	res = pol2cm(polegadas);
	printf("O valor em cm eh: %.2f", res);
}