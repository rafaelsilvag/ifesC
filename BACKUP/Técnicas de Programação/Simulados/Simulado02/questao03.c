/*
 * =====================================================================================
 *
 *       Filename:  questao03.c
 *
 *    Description:  Questao 03 - Simulado Prova 2
 *
 *        Version:  1.0
 *        Created:  05/26/15 19:38:36
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
#include <string.h>

 int main(){
    char string01[30], stringInvertida[30];
    int i,j=0,tamanho;

    printf("Informe uma string: ");
    gets(string01);

    tamanho = strlen(string01);

    for(i=(tamanho-1);i>=0;i--){
        stringInvertida[j] = string01[i];
        j++;
    }
    stringInvertida[j] = '\0';

    printf("String normal: %s\n",string01);
    printf("String invertida: %s\n",stringInvertida);
 }
