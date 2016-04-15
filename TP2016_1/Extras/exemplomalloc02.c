#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor;
    int qtd,i;
    printf("Informe o tamanho do vetor: ");
    scanf("%i",&qtd);

    vetor = (int *)malloc(qtd * sizeof(int));

    for(i=0;i<qtd;i++){
        vetor[i] = i;
    }
    for(i=0;i<qtd;i++){
        printf("%i ",vetor[i]);
    }
    printf("\n");

}
