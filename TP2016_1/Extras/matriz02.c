#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[5][5];
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Informe um valor na pisicao X=%i e Y=%i: ",i,j);
            scanf("%i",&matriz[i][j]);
        }
    }
    system("clear");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%i ",matriz[i][j]);
        }
        printf("\n");
    }


}
