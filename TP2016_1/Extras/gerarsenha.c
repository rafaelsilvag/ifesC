#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void gerarSenha(char senha[TAM], int tamanho){
    int i, pos;
    srand((unsigned) time(NULL));
    char caracteres[TAM] = "abcdefghijklmnopqrstuvxzABCDEFGHIJKLMNOPQRSTUVXYZ1234567890!@#$ˆ&*()_+-={[}]|?/@";

    for(i=0;i<tamanho;i++){
        pos = rand() % (strlen(caracteres));
        senha[i] = caracteres[pos];
    }
    senha[i]='\0';
}
void lerTamanho(int *tamanho){
    printf("Informe o tamanho da senha: ");
    scanf("%i",tamanho);
}
int main(){
    int tamanho;
    char senha[100];

    lerTamanho(&tamanho);
    gerarSenha(senha, tamanho);
    printf("Senha: %s\n",senha);
}
