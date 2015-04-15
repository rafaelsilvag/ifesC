/*
 * =====================================================================================
 *
 *       Filename:  questao03.c
 *
 *    Description:  Faça um programa em C que leia uma frase de ate 50 caracteres
 *                  (utilizar o comando gets) e imprima a frase sem os espacos em branco.
 *                  Imprimir tambem a quantidade de espacos em branco da frase.
 *
 *        Version:  1.0
 *        Created:  15/04/2015 00:23:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: Rafael Silva Guimaraes
 *   Organization: IFES - Campus Cachoeiro de Itapemirim
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<stdio.h>

int main(){
	char frase[51];
	char frase_sem_espacos[51];
	int i, j, qtd_espacos;

	printf("Digite uma frase: ");
	gets(frase);

	j = 0;
	qtd_espacos = 0;
	for(i=0; frase[i] != '\0'; i++){
		if(frase[i] != ' '){
			frase_sem_espacos[j] = frase[i];
			j++;
		}else{
			qtd_espacos++;
		}
	}
	frase_sem_espacos[j] = '\0'; //Apenas para fazer com que a saida desta variavel na tela seja formatada corretamente
	printf("\nFrase sem espacos: %s", frase_sem_espacos);
	printf("\nQuantidade de espacos: %d\n\n", qtd_espacos);
}
