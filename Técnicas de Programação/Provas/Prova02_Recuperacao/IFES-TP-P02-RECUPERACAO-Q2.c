/*
Professor: Rafael S. Guimaraes
Questao 02 - Prova de Recuperacao 02
Valor: 10 pontos
*/
#include <stdio.h>
#include <string.h>

int main(){
	char senhas[10][6];
	int validacoes[10];
	int i, j, qtd_letras = 0; // 2,0 Pontos

	//Entrada: Recebendo as senhas
	printf("\nRecebendo as senhas... \n");
	for(i=0; i<10; i++){ //1,0 Ponto
		printf("Digite a senha %d: ", i+1);
		gets(senhas[i]);
	}

	//Processamento: Verificando validacao das senhas
	for(i=0; i<10; i++){
		qtd_letras = 0;
		for(j=0; senhas[i][j] != '\0'; j++){ //2,0 pontos
			if((senhas[i][j] >= 'a') && (senhas[i][j] <= 'z')){
				qtd_letras++; //1,0 Ponto
			}
		}
		if (qtd_letras <= 3){ //2,0 Pontos
			validacoes[i] = 1;
		}else{
			validacoes[i] = 0;
		}
	}

	//Saida: Mostrando as validacoes das senhas
	printf("\nMostrando o vetor de validacoes... \n"); //2,0 Pontos
	for(i=0; i<10; i++){
		printf("Senha %d: %d\n", i+1, validacoes[i]);
	}
	printf("\n\n");

	return 0;
}
