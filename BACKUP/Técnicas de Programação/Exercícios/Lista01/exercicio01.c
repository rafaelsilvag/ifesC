// Rafael S. Guimaraes
// rafaelg@ifes.edu.br
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declaracao das variaveis
    int num1, num2;
    int soma, resultado;
    // Ler o valor de num1
    printf("Informe o primeiro numero: ");
    scanf("%i",&num1);
    // Ler o valor de num2
    printf("Informe o segundo numero: ");
    scanf("%i",&num2);
   
    //Somando num1 e num2
    soma = num1 + num2;
    // Verificar se a soma dos numeros 
    // eh maior que 20
    if(soma > 20){
        resultado = soma + 8;
    }
    // verificar se a soma dos numeros e
    // eh menor ou igual a 20
    else if(soma <= 20){
        resultado = soma - 5;
    }
    // Imprime o valor do resultado
    printf("Resultado: %i\n", resultado);

}
