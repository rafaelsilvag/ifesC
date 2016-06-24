#ifndef __ARVOREBINARIAPESQUISA_H__
#define __ARVOREBINARIAPESQUISA_H__

/* ----------------------------------------------------------------- */

typedef struct no_arvore_binaria_pesquisa {
	int info;
	struct no_arvore_binaria_pesquisa* sad;
	struct no_arvore_binaria_pesquisa* sae;
} NoArvoreBP;

typedef struct arvorebp {
	NoArvoreBP* raiz;
} ArvoreBP;

// prototipação das funcoes
ArvoreBP* ArvoreBP_inicializa ();
void ArvoreBP_insere(NoArvoreBP **pRaiz, int v);
void ArvoreBP_retira(NoArvoreBP **pRaiz, int v);
void ArvoreBP_encontraSucessor(NoArvoreBP **a, NoArvoreBP **aux);
void ArvoreBP_imprimeEmOrdem(NoArvoreBP *pRaiz);
void ArvoreBP_imprimePreOrdem(NoArvoreBP *pRaiz);
void ArvoreBP_imprimePosOrdem(NoArvoreBP *pRaiz);
int ArvoreBP_vazia (ArvoreBP *abp);;

#endif
