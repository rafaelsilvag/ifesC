#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct disciplina {
    char nome[30];
    float nota;
}Disciplinas;
typedef struct ficha {
    char nome[30];
    int idade;
    Disciplinas disciplinas[5];
}Ficha;
void cadastrarFichas(Ficha fichas[5]){
    int i,j;
    for(i=0;i<5;i++){
        printf("Informe o nome: ");
        gets(fichas[i].nome);
        printf("Informe a idade: ");
        scanf("%i",&fichas[i].idade);
        for(j=0;j<5;j++){
            printf("Informe o nome da disciplina: ");
            gets(fichas[i].disciplinas[j].nome)
            printf("Informe a nota: ");
            scanf("%f",&fichas[i].disciplinas[j].nota);
        }
        getchar();
    }
}
int main(){
    Ficha fichas[5];

    cadastrarFichas(fichas);
}
