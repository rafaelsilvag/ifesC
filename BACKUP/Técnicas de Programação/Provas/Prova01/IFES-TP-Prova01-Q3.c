#include <stdlib.h>
#include <stdio.h>

int main(){
	float notas[10], maiorNota, menorNota;
	int posMaiorNota, posMenorNota, i; // 1 ponto

	for(i=0;i<10;i++){ //2 pontos
		printf("Informe a nota do aluno %i: ",(i+1));
		scanf("%f",&notas[i]);
	}
	// Definir o maior valor
	for(i=0;i<10;i++){ //3 pontos
		if(i==0){
			maiorNota = notas[i];
			posMaiorNota = i;
		}else{
			if(notas[i] > maiorNota){
				maiorNota = notas[i];
				posMaiorNota = i;
			}
		}
	}
	//Definir o menor valor
	for(i=0;i<10;i++){ //3 pontos
		if(i==0){
			menorNota = notas[i];
			posMenorNota = i;
		}else{
			if(notas[i] < menorNota){
				menorNota = notas[i];
				posMenorNota = i;
			}
		}
	}

	printf("Maior nota: %f\n",maiorNota);
	printf("Posicao maior nota: %i\n",posMaiorNota);
	printf("Menor nota: %f\n",menorNota);
	printf("Posicao menor nota: %i\n",posMenorNota); //1 ponto
}
