#include <stdio.h>

void gerarFibonacci(int num){
    long int elemAtual=1, elemAnterior=0, aux, contador=0;
    // Gerar a sequencia de fibonacci 
    while(contador < num){
         // Imprime o valor atual
         printf("%ld ",elemAtual);
         aux = elemAtual + elemAnterior;
         elemAnterior = elemAtual;
         elemAtual = aux;
         contador++;
    }
    printf("\n");
}

int main(){
    // Declaracao das variaveis
    long int numElem;
    // Informar o numero de elementos
    printf("Informe o numero de elementos: ");
    scanf("%ld", &numElem);

    gerarFibonacci(numElem);
    return 0;
}
