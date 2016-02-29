/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Trabalho 01 - Listas Simplesmente Encadeadas
 *
 *        Version:  1.0
 *        Created:  17/05/2015 18:54:38
 *       Revision:  none
 *       Compiler:  clang/gcc
 *
 *         Author:  Rafael S. Guimaraes (rafaelg@ifes.edu.br),
 *   Organization:  IFES - Campus Cachoeiro de Itapemirim
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila_pedidos.h"
#include "lista_blocos.h"
#include "lista_clientes.h"

int main(){
	// Declarando as listas e as filas
	Lista *l;
	ListaClientes *lc;
	Fila *f;

	// Inicializando das listas e filas
	l = Lista_inicializa();
	lc = ListaClientes_inicializa();
	f = Fila_inicializa();

	/* Exemplo de utilizacao */
	int opc;
	do {
		printf("##### IFES - TECNICAS DE PROGRAMACAO - SISTEMA DE REGISTRO DE PEDIDOS ######\n");
		printf("Clientes: Lista\n");
		printf("Blocos: Lista\n");
		printf("Pedidos: Fila\n");
		printf("1 - Cadastrar Cliente\n");
		printf("2 - Cadastrar Bloco\n");
		printf("3 - Abrir pedido de Bloco\n");
		printf("4 - Fechar pedido de Bloco\n");
		printf("5 - Imprimir Clientes\n");
		printf("6 - Imprimir Blocos\n");
		printf("7 - Imprimir Pedidos\n");
		printf("0 - Sair do Programa\n\n");
		printf("############################################################################\n");
		printf("Digite a opcao desejada: ");
		scanf("%i",&opc);
		// Exemplo de utilizacao
		//Cliente cli;
		//printf("Informe o nome: ");
		//scanf("%s",&cli.nome);
		//printf("Informe o cpf: ");
		//scanf("%s",&cli.cpf);
		//printf("Informe a data de nascimento: ");
		//scanf("%s",&cli.nascimento);

		//ListaClientes_insere(l,cli);
		// Fim Exemplo
	}while(opc != 0);

	return 1;
}
