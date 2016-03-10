#include <stdio.h>
#include <stdlib.h>
void cadastrarItens(int *v){
    int i;
    for(i=0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%i", &v[i]);
    }
}
void imprimirItens(int *v){
    int i;
    for(i=0; i < 10; i++){
        printf("Valor: %i\n", v[i]);
    }
}
int main(){
    int x[10];
    cadastrarItens(x);
    imprimirItens(x);
}
