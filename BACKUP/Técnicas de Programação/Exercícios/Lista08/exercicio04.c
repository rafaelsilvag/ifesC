/*
 * =====================================================================================
 *
 *       Filename:  exercicio04.c
 *
 *    Description: 4. Foi realizada uma pesquisa entre 500 habitantes de certa regiao.
 *                    De cada habitante foram coletados os dados: idade, sexo, salario e numero
 *                    de filhos. Crie a estrutura de dados adequada para armazenar estas
 *                    informacoes e faca uma funcao que armazene as informacoes digitadas pelo
 *                    usuario na estrutura de dados criada. Faca tambem uma funcao que calcula
 *                    a media do salario dos habitantes.
 *
 *        Version:  1.0
 *        Created:  05/05/2015 18:48:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rafael S. Guimaraes(rafaelg@ifes.edu.br),
 *   Organization:  IFES Campus Cachoeiro de Itapemirim
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 5

typedef struct pessoa {
    unsigned int idade;
    char sexo;
    float salario;
    int num_filhos;
}Pessoa;

void cadastrar_pessoas(Pessoa v[MAX]){
    int i;
    for(i=0;i<MAX;i++){
        printf("Informe a idade: ");
        scanf("%i",&v[i].idade);
        getchar();
        printf("Informe o sexo [M]Masculino [F]Feminino: ");
        scanf("%c",&v[i].sexo);
        printf("Informe o salario: ");
        scanf("%f",&v[i].salario);
        printf("Informe o numero de filhos: ");
        scanf("%i",&v[i].num_filhos);
    }
}

void imprimir_media_salarial(Pessoa v[MAX]){
    int i;
    float soma=0;

    for(i=0;i<MAX;i++){
        soma += v[i].salario;
    }

    printf("\n\tMedia: %f\n",(soma/MAX));
}

int main(){
    Pessoa vpessoas[MAX];

    cadastrar_pessoas(vpessoas);
    imprimir_media_salarial(vpessoas);
}
