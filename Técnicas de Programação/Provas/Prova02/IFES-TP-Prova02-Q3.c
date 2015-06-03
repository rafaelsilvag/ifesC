#include<stdio.h>
#include<string.h>

#define maxTam 10

struct tipo_imovel{ //2,0 Pontos
	char tipo[100];
	char endereco[100];
	char bairro[100];
	float valor;
	char situacao[8];
};

int main(){
	struct tipo_imovel imoveis[maxTam]; //1,0 Ponto
	int i;
	char situacao[8];

	printf("Cadastrando os imoveis...\n");
	for(i=0; i<maxTam; i++){ //2,0 Pontos
		printf("Imovel %d\n", i+1);
		printf("Tipo: ");
		gets(imoveis[i].tipo);
		printf("Endereco: ");
		gets(imoveis[i].endereco);
		printf("Bairro: ");
		gets(imoveis[i].bairro);
		printf("Valor: ");
		scanf("%f", &imoveis[i].valor);
		getchar();
		printf("Situacao: ");
		gets(imoveis[i].situacao);
	}

	printf("\nDigite a situacao dos imoveis a ser pesquisada: ");
	gets(situacao); //2,0 Pontos

	for(i=0; i<maxTam; i++){ //2,0 Pontos
		if(strcmp(imoveis[i].situacao, situacao) == 0){
			printf("\n\nImovel %d\n", i+1);
			printf("Tipo: %s\n", imoveis[i].tipo);
			printf("Endereco: %s\n", imoveis[i].endereco);
			printf("Bairro: %s\n", imoveis[i].bairro);
			printf("Valor: %0.2f\n", imoveis[i].valor);
			printf("Situacao: %s\n", imoveis[i].situacao);
		}
	}
	printf("\n\n");

}
