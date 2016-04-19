#include <stdio.h>
#include <stdlib.h>

int Ehprimo(int num){
    int i, cont=0;
    for(i=1;i<=num;i++){
        if(num%i == 0){
            cont++;
        }
    }
    if(cont <= 2){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int i, cont=0;
    for(i=1;i<=100;i++){
        if(Ehprimo(i)){
            cont++;
        }
    }
    printf("A quantidade de numeros primos eh: %i\n",cont)
}
