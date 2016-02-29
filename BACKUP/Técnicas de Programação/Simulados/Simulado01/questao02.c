/*
 * =====================================================================================
 *
 *       Filename:  questao02.c
 *
 *    Description:  Criar uma funcao que receba como parametro o ano e retorne 1 se for
 *    				um ano bissexto e 0 se nao for um ano bissexto.
 *
 * 					- Um ano e bissexto se for divisivel por 400.
 *    				- Um ano tambem e bissexto se for divisivel por 4, mas nao por 100.
 *
 *        Version:  1.0
 *        Created:  15/04/2015 00:19:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rafael Silva Guimaraes
 *   Organization:  IFES - Campus Cachoeiro de Itapemirim
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int classificar_ano_bissexto(int ano){
	if (ano % 400 == 0)
		return 1;
	else if ((ano % 4 == 0) && (ano % 100 != 0))
		return 1;
	else
		return 0;
}

int main(){
	int ano;

	printf("Digite o ano: ");
	scanf("%d", &ano);
	if (classificar_ano_bissexto(ano))
		printf("O ano eh bissexto\n\n");
	else
		printf("O ano nao eh bissexto\n\n");
}
