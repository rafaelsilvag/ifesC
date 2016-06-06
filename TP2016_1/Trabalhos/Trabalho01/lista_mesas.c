/*
Curso Tecnico em Informatica - Instituto Federal do Espirito Santo - Cachoeiro de Itapemirim
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_mesas.h"

// funcao que inicializa a lista
ListaMesas* ListaMesas_inicializa (){
	ListaMesas *nova = (ListaMesas *) malloc(sizeof(ListaMesas));
	if (!nova){
		printf("Funcao inicializa: nao foi possivel alocar espaco para uma nova Lista. ");
		exit(1);
	}

	/* Inicializa os dados */
	nova->prim = NULL;
	return nova;
}

// imprime os elementos da lista
void ListaMesas_imprime (ListaMesas *l){
	NoListaMesas *aux; /* variavel auxiliar para percorrer a fila */

	printf("\n\t\tElementos da Lista\n");
	for (aux = l->prim; aux != NULL; aux = aux->prox)
		printf("\t\tInfo = %d\n", aux->info);

	printf("\n");
}


// retorna 1 se vazia ou 0 se nao vazia
int ListaMesas_vazia (ListaMesas *l){
	return (l->prim == NULL);
}


// busca um elemento na lista
int ListaMesas_busca (ListaMesas *l, int v){
	NoListaMesas *aux; /* variavel auxiliar para percorrer a lista */
	for (aux = l->prim; aux != NULL; aux = aux->prox)
		if (aux->info == v)
			return 1;

	// nao achou o elemento
	return 0; 
}


// insere elemento novo na lista
void ListaMesas_insere (ListaMesas *l, int v){
	NoListaMesas *novo = (NoListaMesas *) malloc(sizeof(NoListaMesas));
	novo->info = v;
	novo->prox = l->prim;
	novo->ant = NULL;
	/* nao esta vazia, ou seja, este nao eh o primeiro elemento da lista */
	if (l->prim != NULL)
		l->prim->ant = novo;
	l->prim = novo;
}

//remove um elemento da lista
int ListaMesas_retira (ListaMesas* l, int v){
	NoListaMesas *aux = l->prim; /* ponteiro para percorrer a lista*/
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
