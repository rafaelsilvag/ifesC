#include <stdio.h>
#include <stdlib.h>

int Ehprimo(int num){ // 1 ponto
    int i,cont=0;
    for(i=1;i<=num;i++){ // 3 pontos
        if(num % i == 0){
            cont++;
        }
    }

    if(cont>2) // 2 pontos
        return 0;
    else
        return 1;
}

int main(){
    int i,cont=0;
	for(i=1;i<=100;i++){ // 1 ponto
        if(Ehprimo(i)==1){ // 2 pontos
            printf("Numero primo: %i\n",i);
            cont++;
        }
    }
    printf("Quantidade de numeros primos: %i \n",cont); // 1 ponto
}
