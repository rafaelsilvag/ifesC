/*
 * =====================================================================================
 *
 *       Filename:  fila_pedidos.h
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

#ifndef __FILA_PEDIDOS_H__ 
#define __FILA_PEDIDOS_H__ 

typedef struct no_fila {
	int info; // Valor Padrao
	struct no_fila* prox;
} NoFila;

typedef struct fila {
	NoFila* ini;
	NoFila* fim;
} Fila;

//Prototipo das funcoes
Fila* Fila_inicializa ();	
void Fila_insere (Fila *p, int v);
int Fila_retira (Fila* p);
void Fila_imprime (Fila *p);
int Fila_vazia (Fila *p);

#endif