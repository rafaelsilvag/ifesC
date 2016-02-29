/*
 * =====================================================================================
 *
 *       Filename:  questao01.c
 *
 *    Description:  Questao 01 - Simulado Prova 02
 *
 *        Version:  1.0
 *        Created:  05/26/15 19:58:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rafael S. Guimaraes (GUIMARAES, R. S.),
                    rafaelg@ifes.edu.br
 *   Organization:  IFES
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

void my_strcpy(char *str1, char *str2){
	int i;

	for(i=0; str2[i] != '\0'; i++){
		str1[i] = str2[i];
	}
	str1[i] = '\0';
}

int main(){
	char *str1, *str2;
    int tamanho;

    printf("Informe o tamanho da string: ");
    scanf("%i",&tamanho);
    str1 = (char *)malloc(tamanho * sizeof(char));
    str2 = (char *)malloc(tamanho * sizeof(char));

    printf("Informe a string: ");
    gets(str1)

    my_strcpy(str1, str2);

	printf("\nstr1: %s", str1);
	printf("\nstr2: %s", str2);
}
