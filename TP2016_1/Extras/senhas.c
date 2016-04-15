#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
void gerarSenha(char senha[TAM], int tamanho){
    int i, pos;

    srand((unsigned)time(NULL));
    char caracteres[TAM] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOQPRSTUVWXYZ1234567890@#$&;:<>_-";

    for(i=0;i<tamanho;i++){
        pos = rand() % (strlen(caracteres));
        senha[i]=caracteres[pos];
    }
    senha[i]='\0';
}
int main(){
    char senha[TAM];
    int tamanho;

    printf("Informe o tamanho da senha: ");
    scanf("%i", &tamanho);

    gerarSenha(senha, tamanho);
    printf("Senha: %s\n", senha);
}
