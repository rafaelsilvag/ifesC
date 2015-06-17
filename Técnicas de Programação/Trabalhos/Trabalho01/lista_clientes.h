/*
 * =====================================================================================
 *
 *       Filename:  lista_clientes.h
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
#ifndef __LISTA_CLIENTES_H__ 
#define __LISTA_CLIENTES_H__ 

typedef struct no_lista_clientes {
	int info; // Valor Padrao
	struct no_lista_clientes* prox;
	struct no_lista_clientes* ant;
} NoListaClientes;

typedef struct lista_clientes {
	NoListaClientes* prim;
} ListaClientes;

ListaClientes* ListaClientes_inicializa ();	
void ListaClientes_insere (ListaClientes *l, int v);
int ListaClientes_retira (ListaClientes* l, int v);
void ListaClientes_imprime (ListaClientes *l);
int ListaClientes_vazia (ListaClientes *l);

#endif 
