#include <stdio.h>
int square(int x){
    return (x*x);
}

int main(){
   int num, res;
   printf("Informe um numero: ");
   scanf("%i", &num);
   
   res = square(num);
   printf("Numero ao quadrado: %i", res);
}
