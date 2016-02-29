#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int quadradoMagico(int m[TAM][TAM]){
	//Retorna 1 se for quadrado magico
	int vet_somas[7], soma=0, qmagico=1;
	int i,j,k=0,z=0,v;
	//soma das linhas
	for(i=0;i<TAM;i++){
		soma = 0;
		for(j=0;j<TAM;j++){
			soma = soma + m[i][j];
		}
		vet_somas[k] = soma;
		k++;
	}
	//Soma das colunas
	for(i=0;i<TAM;i++){
		soma = 0;
		for(j=0;j<TAM;j++){
			soma = soma + m[j][i];
		}
		vet_somas[k] = soma;
		k++;
	}
	//diagonal principal
	soma = 0;
	for(i=0;i<TAM;i++){
		soma = soma + m[i][i];
	}
	vet_somas[k] = soma;
	k++;
	//Diagonal secundaria
	soma = 0;
	for(i=2;i >= 0;i--){
		soma = soma + m[z][i]
		z++;
	}
	vet_somas[k] = soma;

	v = vet_somas[0];
	for(i=0;i<7;i++){
		if(v != vet_somas[i]){
			qmagico = 0;
		}
	}

	return qmagico;
}
void lerDadosMatriz(int m[TAM][TAM]){
	int i,j;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Informe o valor m[%i,%i]: ",i,j);
			scanf("%i",&m[i][j]);
		}
	}
}
void imprimirMatriz(int m[TAM][TAM]){
	int i,j;
	for(i=0;i<TAM;i++){
		printf("| ")
		for(j=0;j<TAM;j++){
			printf("%i ",&m[i][j]);
		}
		printf("|\n");
	}
}
int main(){
	int m[TAM][TAM];
	int res;
	
	lerDadosMatriz(m);
	res = quadradoMagico(m);
	imprimirMatriz(m);

	if(res == 1){
		printf("Matriz eh um quadrado magico!\n");
	}else{
		printf("Matriz nao eh um quadrado magico!\n");
	}
}