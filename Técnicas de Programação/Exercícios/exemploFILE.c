/*
 * =====================================================================================
 *
 *       Filename:  exemploFILE.c
 *
 *    Description:  Exemplo Manilacao da Arquivos
 *
 *        Version:  1.0
 *        Created:  06/03/15 21:16:54
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

typedef struct aluno{
    char nome[30];
    char cpf[15];
    int idade;
}Aluno;

int main(){
    FILE *fp;
    Aluno aux, aux2;


    printf("Informe o nome: ");
    gets(aux.nome);
    printf("Informe o CPF: ");
    gets(aux.cpf);
    printf("Informe a idade: ");
    scanf("%i",&aux.idade);

    fp = fopen("arquivo.bin","wb");
    if(fwrite(&aux, sizeof(Aluno),1,fp) != 1)
        printf("Falha ao gravar no arquivo!\n");
    fclose(fp);

    fp = fopen("arquivo.bin","rb");
    if(fread(&aux2, sizeof(Aluno),1,fp) != 1)
        printf("Falha ao ler informacao do arquivo!\n");
    fclose(fp);

    printf("Valor de AUX2\n");
    printf("NOME: %s\n",aux2.nome);
    printf("CPF: %s\n",aux2.cpf);
    printf("IDADE: %i\n",aux2.idade);
    return(0);
}

