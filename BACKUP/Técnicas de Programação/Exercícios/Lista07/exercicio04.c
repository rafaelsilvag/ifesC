#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SU 4
#define PD 10

void lendoNomesSupermercados(char ns[SU][100]){
	int i;
	for(i=0;i<SU;i++){
		printf("Informe o nome do supermercardo: ");
		gets(ns[i]);
	}
}
void lendoNomesProdutos(char np[PD][100]){
	int i;
	for(i=0;i<PD;i++){
		printf("Informe o nome do produto: ");
		gets(np[i]);		
	}
}
void lendoPrecosProdutos(float pprodutos[SU][PD], char ns[SU][100], char np[PD][100]){
	int i,j;
	for(i=0;i<SU;i++){
			for(j=0;j<PD;j++){
				printf("Informe o valor de %s no supermercado %s: ",np[j], ns[i]);
				scanf("%f",&pprodutos[i][j]);
			}
	}
}
void calculandoValorCompras(float pprodutos[SU][PD], float compras[SU]){
	int i,j;
	float soma;
	for(i=0;i<SU;i++){
		soma = 0;
		for(j=0;j<PD;j++){
			soma = soma + pprodutos[i][j]; 
		}
		compras[i] = soma;
	}	
}
void superMercadoBarato(float compras[SU], char ns[SU][100]){
	int i, pos;
	float menor;

	for(i=0;i<SU;i++){
		if(i==0){
			menor = compras[i];
			pos = i;
		}else if(compras[i] < menor){
			menor = compras[i];
			pos = i;
		}
	}
	printf("O supermercado mais barato eh: %s\n",ns[pos]);
}
int main(){
	char nomesSupermercados[SU][100];
	char nomesProdutos[PD][100];
	float compras[SU];
	float cotacoesProdutos[SU][PD];

	lendoNomesSupermercados(nomesSupermercados);
	lendoNomesProdutos(nomesProdutos);
	lendoPrecosProdutos(cotacoesProdutos, nomesSupermercados, nomesProdutos);
	calculandoValorCompras(cotacoesProdutos, compras);
	superMercadoBarato(compras, nomesSupermercados);
}