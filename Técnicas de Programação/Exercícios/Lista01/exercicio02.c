// Rafael S Guimaraes
// rafaelg@ifes.edu.br
#include <stdio.h>
#include <stdlib.h>

int main(){
    // declaracao das variaveis
    int numA, numB;
    
    // Ler os valores
    printf("Informe o valor de A: ");
    scanf("%i", &numA);
    printf("Informe o valor de B: ");
    scanf("%i", &numB);

    // Verifica qual eh o maior e o menor numero
    if(numA > numB){
	printf("Maior numero eh A e o menor e o B\n");
    }
    else if(numB > numA){
	printf("Maior numero eh B e o menor e o A\n");
    }
    else{
        printf("Os numeros sao iguais...\n"); 
    }
}
