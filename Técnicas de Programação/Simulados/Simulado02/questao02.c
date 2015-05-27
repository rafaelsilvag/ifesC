/*
 * =====================================================================================
 *
 *       Filename:  questao02.c
 *
 *    Description:  Questao 02 - Simulado Prova 02
 *
 *        Version:  1.0
 *        Created:  05/26/15 19:58:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rafael S. Guimaraes (GUIMARAES, R. S.), rafaelg@ifes.edu.br
 *   Organization:  IFES
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main(){
    float notasAlunos[5][4], soma;
    int i,j;

    for(i=0;i<5;i++){
        printf("Informe a nota do Aluno %i\n",(i+1))
        for(j=0;j<4;j++){
            printf("Nota %i\n: ",(j+1));
            scanf("%f",&notasAlunos[i][j]);
        }
    }
    for(i=0;i<5;i++){
        soma = 0;
        for(j=0;j<4;j++){
            soma = soma + notasAlunos[i][j];
        }
        printf("Somatorio das notas do Aluno %i eh: %.2f\n",(i+1),soma);
    }
}
