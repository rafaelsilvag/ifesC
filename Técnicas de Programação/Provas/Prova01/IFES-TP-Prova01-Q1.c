#include <stdio.h>
#include <stdlib.h> //0.01

int main(){
    float num1, num2, resultado;
    char simbolo;     //1 ponto

    printf("Informe o primeiro numero: ");
    scanf("%f",&num1);
    printf("Informe o segundo numero: ");
    scanf("%f",&num2);   // 1 ponto
    getchar();
    printf("Informe o simbolo: ");
    scanf("%c",&simbolo);

    switch(simbolo){ //2 pontos
        case '+':
                resultado = num1 + num2;
                break;
        case '-':
                resultado = num1 - num2;
                break;
        case '*':
                resultado = num1 * num2;
                break;
        case '/':
                if(num2 == 0){
                    printf("Divisao por 0!!\n");
                    break;
                }else{
                    resultado = num1 / num2;
                    break;
                }
    }

    printf("Resultado final: %f\n",resultado); //1 ponto
}