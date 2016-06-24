/*
Autor: Rafael S. Guimaraes
*/

#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria_pesquisa.h"

/* ------------------------------------------------------------- */
// função que inicializa a arvorebp
ArvoreBP* ArvoreBP_inicializa (){
	ArvoreBP *nova = (ArvoreBP *) malloc(sizeof(ArvoreBP));
	if (!nova){
		printf("Erro: nao foi possivel alocar espaco para uma nova arvorebp. ");
		exit(1);
	}

	/* Inicializa os dados */
	nova->raiz = NULL;
	return nova;
}

//funcao que imprime os elementos da arvorebp em ordem
void ArvoreBP_imprimeEmOrdem(NoArvoreBP *pRaiz){
	if(pRaiz != NULL){
		ArvoreBP_imprimeEmOrdem(pRaiz->sae);
		printf("\n\t\t%i", pRaiz->info);
		ArvoreBP_imprimeEmOrdem(pRaiz->sad);
	}
}

//funcao que imprime os elementos da arvorebp em pre-ordem
void ArvoreBP_imprimePreOrdem(NoArvoreBP *pRaiz){
	if(pRaiz != NULL){
		printf("\n\t\t%i", pRaiz->info);
		ArvoreBP_imprimePreOrdem(pRaiz->sae);
		ArvoreBP_imprimePreOrdem(pRaiz->sad);
	}
}

//função que imprime os elementos da arvorebp em pos-ordem
void ArvoreBP_imprimePosOrdem(NoArvoreBP *pRaiz){
	if(pRaiz != NULL){
		ArvoreBP_imprimePosOrdem(pRaiz->sae);
		ArvoreBP_imprimePosOrdem(pRaiz->sad);
		printf("\n\t\t%i", pRaiz->info);
	}
}


// insere elemento novo na arvorebp
void ArvoreBP_insere(NoArvoreBP **pRaiz, int v){
	if(*pRaiz == NULL){
		*pRaiz = (NoArvoreBP *) malloc(sizeof(NoArvoreBP));
		(*pRaiz)->sae = NULL;
		(*pRaiz)->sad = NULL;
		(*pRaiz)->info = v;
	}else{
		if(v < (*pRaiz)->info)
			ArvoreBP_insere(&(*pRaiz)->sae, v);
		if(v > (*pRaiz)->info)
			ArvoreBP_insere(&(*pRaiz)->sad, v);
	}
}


// retira um elemento da arvorebp
void ArvoreBP_retira(NoArvoreBP **pRaiz, int v)
{
	void ArvoreBP_encontraSucessor(NoArvoreBP **pRaiz, NoArvoreBP **aux);
	NoArvoreBP *aux;

	if (*pRaiz == NULL) //Se nao tiver noh raiz, ou seja, a arvore for nula
		return;

	if (v < (*pRaiz)->info){ //Se o valor a ser retirado eh menor que o valor do noh analisado
		if((*pRaiz)->sae) //Se o noh analisado tem sub arvore esquerda
			ArvoreBP_retira(&(*pRaiz)->sae, v); // Continua analisando o elemento da sub arvore esquerda
		else return;
	}
	else if (v > (*pRaiz)->info){ //Se o valor a ser retirado eh maior que o valor do noh analisado
		if((*pRaiz)->sad) //Se o noh analisado tem sub arvore direita
			ArvoreBP_retira(&(*pRaiz)->sad, v); // Continua analisando o elemento da sub arvore direita
		else return;
	}
	else if (v == (*pRaiz)->info) //Se o valor a ser retirado eh igual que o valor do noh analisado
	{
		aux = *pRaiz;
		if ((*pRaiz)->sae == NULL) //Se o noh analisado nao tem sub arvore esquerda (tem apenas um filho - sad)
			*pRaiz = (*pRaiz)->sad; //Substitui-se o noh analisado (removido) pelo elemento da sub arvore direita
		else if ((*pRaiz)->sad == NULL) //Se o noh analisado nao tem sub arvore direita (tem apenas um filho - sae)
			*pRaiz = (*pRaiz)->sae; //Substitui-se o noh analisado (removido) pelo elemento da sub arvore esquerda
		else // Se o noh analisado tem dois filhos - sad e sae
			ArvoreBP_encontraSucessor(&(*pRaiz)->sad, &aux); //Procura-se pelo antecessor do noh analisado (removido)
		free(aux);
	}
}

void ArvoreBP_encontraSucessor(NoArvoreBP **a, NoArvoreBP **aux)
{
	if ((*a)->sad == NULL)
	{
		(*aux)->info = (*a)->info;
		if ((*a)->sae == NULL)
		{
			*aux = *a;
			*a = NULL;
		}
		else
		{
			*aux = *a;
			*a = (*a)->sae;
		}
	}
	else
		ArvoreBP_encontraSucessor(&(*a)->sad, aux);
}



// retorna 1 se vazia ou 0 se nao vazia
int ArvoreBP_vazia (ArvoreBP *abp){
	return (abp->raiz == NULL);
}
