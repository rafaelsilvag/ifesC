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
    Fila *nova = (Fila *)malloc(sizeof(Fila));

    /* inicializacao dos dados */
    nova->ini = NULL;
    nova->fim = NULL;

    return nova;
}

void inserir(Fila *f, int v){
     No *novo = (No *)malloc(sizeof(No));
     
     novo->info = v;
     novo->prox = NULL;

     if(f->fim != NULL)
         f->fim->prox = novo;
     
     f->fim = novo;

     if(f->ini == NULL)
         f->ini = f->fim;
}

int retirar(Fila *f){
    No *removido;
    No *novo_ini;
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
   
    for(aux=f->ini; aux != NULL; aux=aux->prox){
        printf("%d ", aux->info);
    }
    printf("\n");
}

int vazia(Fila *f){
    return (f->ini == NULL);
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

     inserir(fila, 10);
     inserir(fila, 20);
     inserir(fila, 30);

     imprimir(fila);
     printf("Elemento retirado: %d\n", retirar(fila));

     imprimir(fila);

     printf("Elemento retirado: %d\n", retirar(fila));
     imprimir(fila);
}
