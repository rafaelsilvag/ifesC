/*
Arquivo: lista.h (Prototipo das Funcoes e Declaracoes dos Structs)
*/

#ifndef __LISTA_MESAS_H__ 
#define __LISTA_MESAS_H__ 

typedef struct no_lista {
	int info;
	struct no_lista *prox;
	struct no_lista *ant;
} NoListaMesas;

typedef struct lista {
	NoListaMesas *prim;
} ListaMesas;

ListaMesas* ListaMesas_inicializa ();	
void ListaMesas_insere (ListaMesas *l, int v);
int ListaMesas_retira (ListaMesas *l, int v);
void ListaMesas_imprime (ListaMesas *l);
int ListaMesas_vazia (ListaMesas *l);

#endif 
