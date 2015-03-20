#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void lerValores(int v[MAX]){
	int i;
	for(i=0;i<MAX;i++){
		printf("Informe o valor %i: ",i);
		scanf("%i",&v[i]);
	}
}
void imprimirMedia(int v[MAX]){
	float mediaPares, mediaImpares;
	float somaPares=0, somaImpares=0;
	int numPares=0, numImpares=0, i;
	for(i=0;i<MAX;i++){
		if((v[i] % 2) == 0){
			numPares++;
			somaPares = somaPares + v[i];
		}else{
			numImpares++;
			somaImpares = somaImpares + v[i];
		}
	}
	mediaPares = somaPares / numPares;
	mediaImpares = somaImpares / numImpares;

	printf("Media de numeros pares: %.1f\n",mediaPares);
	printf("Media de numeros impares: %.1f\n",mediaImpares);
}

int main(){
	//declaracao das variaveis
	int vParesImpares[MAX];

	lerValores(vParesImpares);
	imprimirMedia(vParesImpares);

}