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

void realizarSomaMatrizes(int m1[][COL],int m2[][COL], int sm[][COL]){
    int i,j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            sm[i][j] = m1[i][j] + m2[i][j];
        }
    }
}
void cadastrarMatriz(int m[][COL]){
    int i,j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("Informe um valor para X=%i e Y=%i: ",i,j);
            scanf("%i",&m[i][j]);
        }
    }
}
void imprimirMatriz(int m[][COL]){
    int i,j;
    for(i=0;i<LIN;i++){
        printf("\t");
        for(j=0;j<COL;j++){
            printf("%5i\t",m[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m1[LIN][COL];
    int m2[LIN][COL];
    int sm[LIN][COL];

    system("cls");
    printf("Inserir valores para a matriz M1\n");
    cadastrarMatriz(m1);
    system("cls");
    printf("Inserir valores para a matriz M2\n");
    cadastrarMatriz(m2);
    system("cls");
    printf("Imprimindo valores dos vetores\n");
    printf("\t\tMATRIZ 1\n");
    imprimirMatriz(m1);
    printf("\t\tMATRIZ 2\n");
    imprimirMatriz(m2);
    realizarSomaMatrizes(m1,m2,sm);
    printf("\t\tSoma das matrizes eh\n");
    imprimirMatriz(sm);
}
