#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor,tamanho,i;

    printf("Informe o tamanho: ");
    scanf("%i", &tamanho);

    vetor = (int *) malloc(tamanho * sizeof(int));

    for(i=0;i<tamanho;i++){
        vetor[i] = i;
    }
    for(i=0;i<tamanho;i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");
}
