#include <stdio.h>
#include <stdlib.h>
int mystrlen(char str[]){
    int i,tamanho=0;
    for(i=0;str[i]!='\0';i++){
        tamanho++;
    }
    return tamanho;
}

int mystrcmp(char str01[], char str02[]){
    int i;
    if(mystrlen(str01) == mystrlen(str02)){
        for(i=0;str01[i]!='\0';i++){
            if(str01[i]!=str02[i]){
                return 1;
            }
        }
    }else{
        return 1;
    }
    return 0;
}
int main(){
    char senha[20], chksenha[20];

    printf("Informe a senha: ");
    gets(senha);

    printf("Confirme a senha: ");
    gets(chksenha);


    if(mystrcmp(senha, chksenha) == 0){
        printf("Senhas iguais!!\n");
    }else{
        printf("Senhas nao correspondem!!\n");
    }
}
