#include <stdio.h>
#include <stdlib.h>
#define QA 5
#define QM 4
int main(){
    // Declaracao das variaveis
    int i,j;
    float notas[QA][QM], soma;

    // Ler as notas de cada aluno
    for(i=0;i<QA;i++){
        for(j=0;j<QM;j++){
            printf("Informe a nota do aluno %i: ",(i+1));
            scanf("%f",&notas[i][j]);
        }
    }
    // Imprimir o somatorio das notas de cada aluno
    for(i=0;i<QA;i++){
        soma = 0;
        for(j=0;j<QM;j++){
            soma = soma + notas[i][j];
        }
        printf("Aluno %i: %.2f\n",(i+1),soma);
    }
}
