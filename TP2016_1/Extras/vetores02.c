#include <stdio.h>
#include <stdlib.h>
void imprimirItens(int *v){
  int i;
  for(i=0;i < 5;i++){
      printf("Valor: %i\n",v[i]);
  }
}
void cadastrarItens(int *v){
    int i;
    for(i=0;i < 5;i++){
        printf("Informe um valor: ");
        scanf("%i",&v[i]);
    }
}
int main(){
    int vet[5] = {1,2,3,4,5};
    cadastrarItens(vet);
    imprimirItens(vet);
}
