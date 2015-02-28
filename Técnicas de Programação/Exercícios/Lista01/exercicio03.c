// Rafael S Guimaraes
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declaracao das variaveis
    int numero;
    
    // Ler o numero
    printf("Informe o valor: ");
    scanf("%i", &numero);

    // Verifica se o valor eh par ou impar
    if((numero % 2) == 0 ){
        printf("Eh um numero PAR\n");
    }
    else{
        printf("Eh um numero IMPAR\n");
    }
} 
