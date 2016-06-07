#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no *prox;
}No;

typedef struct fila {
    No *ini;
    No *fim;
}Fila;

Fila* inicializa(){
    Fila *nova  = (Fila *) malloc(sizeof(Fila));

    // inicializar a fila
    nova->ini = NULL;
    nova->fim = NULL;
   
    return nova;
}

void insere(Fila *f, int v){
     No *novo = (No *)malloc(sizeof(No));
     novo->info = v;
     novo->prox = NULL;

     if(f->fim != NULL)
         f->fim->prox = novo;
     
     f->fim = novo;
     
     if(f->ini == NULL) /* Fila antes estava vazia */
         f->ini = f->fim;
}

int retira(Fila *f){
    No *novo_ini;
    No *removido;
    int valor;

    removido = f->ini;
    novo_ini = f->ini->prox;
    
    valor = f->ini->info;
    f->ini = novo_ini;

    if(f->ini == NULL)
        f->fim = NULL;
    free(removido);
    return valor; 
}

void imprimir(Fila *f){
    No *aux;

    for(aux=f->ini; aux != NULL;aux = aux->prox){
	printf("Info: %d\n",aux->info);
    }
}

int vazia(Fila *f){
   return(f->ini == NULL);
}
void libera(Fila *f){
     No *aux = f->ini;
     while(aux != NULL){
          No *t = aux->prox;
          free(aux);
          aux = t;
     }
}
int main(){
	Fila *fila;
        fila = inicializa();
 
	insere(fila, 10);
        insere(fila, 20);
        insere(fila, 30);
       
        imprimir(fila);
	
	printf("Primeiro elemento: %d\n",retira(fila));
	imprimir(fila);
 	printf("Segundo elemento: %d\n",retira(fila));

	imprimir(fila);
}
