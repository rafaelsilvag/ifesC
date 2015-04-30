/*
 * =====================================================================================
 *
 *       Filename:  exercicio03.c
 *
 *    Description:  Fazer um programa que cria uma estrutura livro, 
 *                  que contem os elementos nome, editora, isbn, 
 *                  ano de edicao, numero de paginas e preco. 
 *                  Criar uma variavel desta estrutura que e um vetor 
 *                  de 5 elementos. Ler os valores para a estrutura e 
 *                  imprimir a media do numero de paginas dos livros

 *        Version:  1.0
 *        Created:  29/04/2015 18:54:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rafael S. Guimaraes (rafaelg@ifes.edu.br), 
 *   Organization:  IFES
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define QTD 5
typedef struct livro {
	char nome[30];
	char editora[30];
	int isbn;
	int ano;
	int numPaginas;
	float preco; 
}Livro;

int main(){
	Livro livros[QTD];
	int i, soma=0;
	float media;

	printf("Cadastro de Livro\n");
	for(i=0;i<QTD;i++){
		printf("Informe o nome: ");
		gets(livros[i].nome);
		printf("Informe editora: ");
		gets(livros[i].editora);
		printf("Informe ISBN: ");
		scanf("%i",&livros[i].isbn);
		printf("Informe ano: ");
		scanf("%i",&livros[i].ano);
		printf("Informe numero de paginas: ");
		scanf("%i",&livros[i].numPaginas);
		printf("Informe preco: ");
		scanf("%f",&livros[i].preco);
		getchar();
		soma += livros[i].numPaginas;
	}
	media = soma / QTD;
	printf("Media do numero de paginas: %f\n",media);
}