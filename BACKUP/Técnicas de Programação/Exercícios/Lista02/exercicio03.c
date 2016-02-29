#include <stdio.h>
#include <math.h>
int main(){
    int num,i;
    float resultado;
    for(i=0;i<10;i++){
        printf("Informe um numero: ");
        scanf("%i",&num);

        resultado = pow(num,3); 

        printf("O valor eh: %.1f\n",resultado);
   }
}
