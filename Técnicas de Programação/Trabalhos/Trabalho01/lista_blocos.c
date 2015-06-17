/*
 * =====================================================================================
 *
 *       Filename:  lista_blocos.c
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
#include "lista_blocos.h"

// funcao que inicializa a lista
Lista* Lista_inicializa (){
	Lista *nova = (Lista *) malloc(sizeof(Lista));
	if (!nova){
		printf("Funcao inicializa: nao foi possivel alocar espaco para uma nova Lista. ");
		exit(1);
	}

	/* Inicializa os dados */
	nova->prim = NULL;
	return nova;
}

// imprime os elementos da lista
void Lista_imprime (Lista *l){
	NoLista *aux; /* variavel auxiliar para percorrer a fila */

	printf("\n\t\tElementos da Lista\n");
	for (aux = l->prim; aux != NULL; aux = aux->prox)
		printf("\t\tInfo = %d\n", aux->info);

	printf("\n");
}


// retorna 1 se vazia ou 0 se nao vazia
int Lista_vazia (Lista *l){
	return (l->prim == NULL);
}


// busca um elemento na lista
int Lista_busca (Lista *l, int v){
	NoLista *aux; /* variavel auxiliar para percorrer a lista */
	for (aux = l->prim; aux != NULL; aux = aux->prox)
		if (aux->info == v)
			return 1;

	// nao achou o elemento
	return 0;
}


// insere elemento novo na lista
void Lista_insere (Lista *l, int v){
	NoLista *novo = (NoLista*) malloc(sizeof(NoLista));
	novo->info = v;
	novo->prox = l->prim;
	novo->ant = NULL;
	/* nao esta vazia, ou seja, este nao eh o primeiro elemento da lista */
	if (l->prim != NULL)
		l->prim->ant = novo;
	l->prim = novo;
}

//remove um elemento da lista
int Lista_retira (Lista* l, int v){
	NoLista *aux = l->prim; /* ponteiro para percorrer a lista*/
	/* procura elemento na lista, guardando anterior */
	while ( (aux != NULL) && (aux->info == v) ) {
		aux = aux->prox;
	}
	if(aux != NULL){
		if(aux->prox != NULL)
			aux->prox->ant = aux->ant;
		if(aux->ant != NULL)
			aux->ant->prox = aux->prox;
		else
			l->prim = aux->prox;
		free(aux);
		return 1;
	}else{
		return 0;
	}
}
