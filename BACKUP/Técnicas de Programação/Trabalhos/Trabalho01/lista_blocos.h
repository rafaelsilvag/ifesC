/*
 * =====================================================================================
 *
 *       Filename:  lista_blocos.h
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
#ifndef __LISTA_BLOCOS_H__
#define __LISTA_BLOCOS_H__

typedef struct no_lista {
	int info;
	struct no_lista* prox;
	struct no_lista* ant;
} NoLista;

typedef struct lista {
	NoLista* prim;
} Lista;

Lista* Lista_inicializa ();
void Lista_insere (Lista *l, int v);
int Lista_retira (Lista* l, int v);
void Lista_imprime (Lista *l);
int Lista_vazia (Lista *l);

#endif
