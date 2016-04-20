#include <stdio.h>
#include <stdlib.h>
#define CH 5
#define MT 3
int main()}{
  float chapas[CH][MT], soma;
  int i,j;
  // ler o valor dos materiais de cada chapa
  system("cls");
  for(i=0;i<CH;i++){
    for(j=0;j<MT;j++){
      printf("Informe o valor do material %i da chapa %i: ",j+1,i+1);
      scanf("%f",&chapas[i][j]);
    }
  }
  // Imprimir o valor total com impostos de cada chapa
  system("cls");
  for(i=0;i<CH;i++){
    soma = 0;
    for(j=0;j<MT;j++){
      soma += chapas[i][j];
    }
    soma = soma + (soma * 0.15);
    printf("O valor total do custo da chapa %i eh: %.2f\n",(i+1),soma);
  }
  system("pause");
}
