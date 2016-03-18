#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int fat(int n){
    int fatorial=1, i;
    for(i=1;i<=n;i++){
        fatorial = fatorial * i;
    }
    return fatorial;
}
void fatorialVetor(int a[], int b[]){
    int i;

    for(i=0;i < TAM;i++){
        b[i] = fat(a[i]);
    }
}
void lerVetor(int v[]){
    int i;
    system("cls");
    for(i=0;i<TAM;i++){
        printf("Informe o valor da posicao %i: ",i);
        scanf("%i",&v[i]);
    }
}
void imprimirVetores(int a[], int b[]){
    int i;
    system("cls");
    printf("\t A \t B \n;");
    for(i=0;i<TAM;i++){
        printf("\t !%i \t %i \n",a[i], b[i]);
    }
}
int main(){
    int a[TAM], b[TAM];

    lerVetor(a);
    fatorialVetor(a,b);
    imprimirVetores(a,b);
}
