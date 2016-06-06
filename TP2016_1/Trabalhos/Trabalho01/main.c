/*
------------------------------------------
-  Instituto Federal do Espirito Santo   -
Rafael S. Guimaraes <rafaelg@ifes.edu.br>
------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"
#include "lista_mesas.h"
#include "lista_clientes.h"

int main(){

	ListaMesas *lm;
	ListaClientes *lc;
	Fila *fp;

	lm = ListaMesas_inicializa();
	lc = ListaClientes_inicializa();
	fp = Fila_inicializa();

	/* Exemplo de utilizacao */

	printf("########## IFES - TECNICAS DE PROGRAMACAO ##########\n");
        printf("#  SISTEMA DE REGISTRO DE PEDIDOS MESAS DE GRANITO #\n");
	printf("####################################################\n");
	printf("Clientes: Lista\n");
	printf("Mesas: Lista\n");
	printf("Pedidos: Fila\n");
	printf("1 - Cadastrar Cliente\n");
	printf("2 - Cadastrar Mesa\n");
	printf("3 - Abrir pedido de Mesa\n");
	printf("4 - Fechar pedido de Mesa\n");
	printf("5 - Imprimir Clientes\n");
	printf("6 - Imprimir Mesas\n");
	printf("7 - Imprimir Pedidos\n");
	printf("0 - Sair do Programa\n\n");	
	printf("Digite a opcao desejada: \n");

	/* Cliente cli;
	printf("Informe o nome: ");
	scanf("%s",&cli.nome);
	printf("Informe o cpf: ");
	scanf("%s",&cli.cpf);
	printf("Informe a data de nascimento: ");
	scanf("%s",&cli.nascimento);

	ListaClientes_insere(l,cli);
	
	Fim Exemplo */
}
