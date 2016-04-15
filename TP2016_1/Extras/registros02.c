#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct ficha {
    char nome[30];
    int idade;
    Disciplinas disciplinas[5];
}Ficha;
int main(){
    Ficha *fichas;

    fichas = (Ficha *)malloc(5 * sizeof(Ficha));
}
