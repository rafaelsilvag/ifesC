#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void lerAlturas(float v[MAX]){
	int i;
	for(i=0;i<MAX;i++){
		printf("Informe a altura do atleta %i : ",(i+1));
		scanf("%f",&v[i]);
	}
}
void menorAlturasMedia(float v[MAX]){
	float media, somaAlturas=0;
	int i;	
	for(i=0;i<MAX;i++){
		somaAlturas = somaAlturas + v[i]
	}
	media = somaAlturas / MAX;

	printf("Media das alturas: %.2f\n",media);
	for(i=0;i<MAX;i++){
		if(v[i] < media){
			printf("Atleta %i - Altura: %.2f\n",(i+1),v[i]);			
		}
	}
}
int main(){
	//Declaracao das variaveis
	float alturaAtletas[MAX];

	lerAlturas(alturaAtletas);
	menorAlturasMedia(alturaAtletas);
}