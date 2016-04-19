#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void maiorMenor(float notas[TAM]){
    // declaracao das variaveis
    int i, posMaiorNota, posMenorNota;
    float maiorNota, menorNota;

    // Ler as informacoes de notas
    for(i=0;i<TAM;i++){
        printf("Informe a nota: ");
        scanf("%d",&notas[i]);
    }
    // Imprimir a maior nota e sua posicao
    for(i=0;i<TAM;i++){
        if(i==0){
            maiorNota = notas[i];
            posMaiorNota = i;
        }else if(notas[i] > maiorNota){
            maiorNota = notas[i];
            posMaiorNota = i;
        }
    }
    // Imprimir a menor nota e sua posicao
    for(i=0;i<TAM;i++){
        if(i==0){
            menorNota = notas[i];
            posMenorNota = i;
        }else if(notas[i] < menorNota){
            menorNota = notas[i];
            posMenorNota = i;
        }
    }
    printf("Maior nota: %.2f, Posicao: %i\n",maiorNota, posMaiorNota);
    printf("Menor nota: %.2f, Posicao: %i\n",menorNota, posMenorNota);
}
int main(){
    float notas[TAM];
    maiorMenor(notas);
}
