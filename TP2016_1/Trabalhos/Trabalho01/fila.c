/*
Arquivo: fila.c (Implementacao das Funcoes)
Instituto Federal do Espirito Santo - Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// funcao que inicializa a fila
Fila* Fila_inicializa (){
	Fila *nova = (Fila *) malloc(sizeof(Fila));
	if (!nova){
		printf("Fila_nova: nao foi possivel alocar espaco para uma nova fila. ");
		exit(1);
	}

	/* Inicializa os dados */
	nova->ini = NULL;
	nova->fim = NULL;
	return nova;
}

// imprime os elementos da fila
void Fila_imprime (Fila *f){
	NoFila *aux; /* variavel auxiliar para percorrer a fila - IFES 2013*/

	if(f->ini != NULL){
		printf("\n\t\tElementos da Fila\n\n");
		printf("\t\tini -> ");
		for (aux = f->ini; aux != NULL; aux = aux->prox)
			printf("|%d| ", aux->info);
		printf("<- fim");
	}else{
		printf("\n\t\tFila Vazia!");
	}
	printf("\n");
}

// retorna 1 se vazia ou 0 se nao vazia
int Fila_vazia (Fila *f){
	return (f->ini == NULL);
}


// insere elemento novo na fila (sempre no final)
void Fila_insere (Fila *f, int v){
	NoFila *novo = (NoFila*) malloc(sizeof(NoFila));
	novo->info = v;
	novo->prox = NULL;
	if (f->fim != NULL) 
		f->fim->prox = novo;

	f->fim = novo;
	if (f->ini==NULL) /* fila antes vazia? */
		f->ini = f->fim;
}

// retira um elemento da fila (sempre do inicio, ou seja o primeiro)
int Fila_retira (Fila* f){
	NoFila* novo_ini;
	NoFila* removido;
	int valor;

	removido = f->ini;
	novo_ini = f->ini->prox;

	valor = f->ini->info;
	f->ini = novo_ini;
	if (f->ini == NULL) /* fila ficou vazia? */
		f->fim = NULL;
	free(removido);
	return valor;
}