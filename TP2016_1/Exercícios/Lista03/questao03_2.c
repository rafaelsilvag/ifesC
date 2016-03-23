/*
    Lista 03 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3


void realizarSomaMatrizes(int m1[][COL], int m2[][COL], int sm[][COL]){
    int i,j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            sm[i][j] = m1[i][j]+m2[i][j];
        }
    }
}

void cadastrarMatriz(int m[][COL]){
    int i,j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("Informe o valor de X=%i e Y=%i: ",i,j);
            scanf("%i",&m[i][j]);
        }
    }
}
void imprimirMatriz(int m[][COL]){
    int i,j;
    for(i=0;i<LIN;i++){
        printf("\t");
        for(j=0;j<COL;j++){
            printf("%5d\t",m[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m1[LIN][COL], m2[LIN][COL];
    int soma[LIN][COL];

    printf("Cadastrar valores para M1\n");
    cadastrarMatriz(m1);

    printf("Cadastrar valores para M2\n");
    cadastrarMatriz(m2);

    printf("\t\tImprimir valores de M1\n");
    imprimirMatriz(m1);

    printf("\t\tImprimir valores de M2\n");
    imprimirMatriz(m2);

    printf("\t\tImprimir Soma das Matrizes\n");
    realizarSomaMatrizes(m1,m2,soma);
    imprimirMatriz(soma);
}


