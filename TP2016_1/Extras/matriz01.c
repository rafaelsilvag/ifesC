#include <stdio.h>


int main(){
    int matriz[5][5];
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Informe  o valor da posicao X=%i e Y=%i: ",i,j);
            scanf("%i",&matriz[i][j]);
        }
    }
    system("clear");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf(" %i ",matriz[i][j]);
        }
        printf("\n");
    }

}
