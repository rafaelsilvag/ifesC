#include <stdio.h>
#include <stdlib.h>
int multiploSete(int num){
    if(num % 7 == 0)
        return 1;
    else
        return 0;
}
int main(){
    int i;
    int N;
    printf("Informe um valor: ");
    scanf("%i",&N);
    for( i = 1 ; i <= N ; i + + ) {
        if(multiploSete(i)){
            printf("%i\n",i);
        }
    }
    system("pause");
}
