#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ficha {
    char nome[30];
    int idade;
    int numFilhos;
};
void lerFichas(struct ficha *fichas){
    int i;

    for(i=0;i<10;i++){
        printf("Informe o nome: ");
        gets(fichas[i].nome);
        printf("Informe a idade: ");
        scanf("%i",&fichas[i].idade);
        printf("Informe o num de filhos: ");
        scanf("%i",&fichas[i].numFilhos);
    }
}

int main(){
    struct ficha fichas[10];
    lerFichas(fichas);
}
