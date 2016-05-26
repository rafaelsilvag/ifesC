#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no *prox;
}No;

typedef struct lista {
    No *prim;
}Lista;

Lista* inicializar(){
    Lista *nova = (Lista *)malloc(sizeof(Lista));

    nova->prim = NULL;
    return nova;
}
void insere(Lista *l, int v){
    No *novo = (No *)malloc(sizeof(No));

    novo->info = v;
    novo->prox = l->prim;
    l->prim = novo;
}
void imprime(Lista *l){
    No *aux;
    for(aux = l->prim; aux != NULL; aux=aux->prox){
        printf("Valor: %i\n",aux->info);
    }
}
int busca(Lista *l, int v){
    No *aux;

    for(aux=l->prim;aux!=NULL;aux=aux->prox){
        if(aux->info == v){
            return 1;
        }
    }
    return 0;
}
int retirar(Lista *l, int v){
    No *ant=NULL;
    No *aux=l->prim;

    // Buscar o elemento
    while(aux != NULL && aux->info != v){
        ant = aux;
        aux = aux->prox;
    }
    // Verificar se achou algum elemento
    if(aux == NULL)
        return 0;

    //Verificar posicao de remocao do elemento
    if(ant==NULL){
        l->prim = l->prim->prox;
    }else{
        ant->prox = aux->prox;
    }
    free(aux);
    return 1;
}
void libera(Lista *l){
    No *aux = l->prim;
    while(aux!= NULL){
        aux = l->prim;
        l->prim = l->prim->prox;
        free(aux);
    }
}
int main(){
    Lista *l;

    l = inicializar();

    insere(l, 23);
    insere(l, 50);
    insere(l, 60);

    imprime(l);
    printf("\n");
    retirar(l, 60);
    imprime(l);
}
