#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v;
    int tamanho,i;

    printf("Informe o tamanho: ");
    scanf("%i",&tamanho);

    v = (int *)malloc(sizeof(int) * tamanho);

    for(i=0;i<tamanho;i++){
        printf("Informe um valor: ");
        scanf("%i", &v[i]);
    }
    for(i=0;i<tamanho;i++){
        printf("%i ",v[i]);
    }
    printf("\n");
}
