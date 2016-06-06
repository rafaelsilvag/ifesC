/*
Arquivo: fila.h (Prototipo das Funcoes e Declaracoes dos Structs)
*/

#ifndef __FILA_H__ 
#define __FILA_H__ 

typedef struct no_fila {
	int info; // Valor Padrao
	struct no_fila *prox;
} NoFila;

typedef struct fila {
	NoFila *ini;
	NoFila *fim;
} Fila;

//Prototipo das funcoes
Fila* Fila_inicializa ();	
void Fila_insere (Fila *p, int v);
int Fila_retira (Fila *p);
void Fila_imprime (Fila *p);
int Fila_vazia (Fila *p);

#endif
