#include <stdio.h>
#include <stdlib.h>

float pes2metros(float valor){
	// Converter o valor de pes para metros
	return (valor * 3.281);
}

int main(){
	//declaracao das variaveis
	float valor;

	//Receber o valor do usuario
	printf("Informe o valor em pes: ");
	scanf("%f", &valor);

	printf("O valor em metros eh: %.2f",pes2metros(valor));

	return 0;
}
