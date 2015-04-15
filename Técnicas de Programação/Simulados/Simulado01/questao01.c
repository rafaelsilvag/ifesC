/*
 * =====================================================================================
 *
 *       Filename:  questao01.c
 *
 *    Description:
 *
 * 				Seja N um numero quadrado perfeito. Se somarmos os numeros impares consecutivos (1+3+5+7+9+...) 
 *				ate que esta soma seja igual a N, o numero M de termos somados sera igual a raiz quadrada de N.
 *              Exemplo: N = 16; 16 = 1 + 3 + 5 + 7; M = 4 termos. Logo, a raiz quadrada de 16 e 4.
 *
 *              Faça um programa em C para ler um numero inteiro e positivo N e responder se N e quadrado perfeito.
 *
 *              Obs.1: Para achar a raiz quadrada de n faca: sqrt(n).
 *              Obs.2: Lembre-se tambem de importar #include<math.h>
 *
 *        Version:  1.0
 *        Created:  15/04/2015 00:12:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rafael S. Guimaraes
 *   Organization:  IFES - Campus Cachoeiro de Itapemirim
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float n; //Numero inteiro positivo digitado pelo usuario (float apenas para ser passado para funcao sqrt(n))
	int i; //Contador do loop
	int soma = 0; //Soma dos numeros impares da sequencia
	float termos = 0; //Numero de termos da sequência de numeros impares (float apenas para ser comparado com o resultado da funcao sqrt(n))

	printf("Digite um inteiro positivo: ");
	scanf("%f", &n);

	i=1;
	while(soma < n){
		//Se o número i for ímpar
		if(i % 2 != 0){
			soma = soma + i;
			termos = termos + 1;
		}
		i++;
	}

	//Verificando se o n e quadrado perfeito
	//Calculo da raiz quadrada pode ser pow(n, 1/2) ou sqrt(n) (lembrando de #include<math.h>)
	if(sqrt(n) ==  termos)
		printf("O numero n eh quadrado perfeito!\n\n");
	else
		printf("O numero n nao eh quadrado perfeito!\n\n");
}
