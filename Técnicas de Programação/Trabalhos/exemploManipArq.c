/*
 * =====================================================================================
 *
 *       Filename:  exemploManipArq.c
 *
 *    Description:  Tarefa08 - Licenciatura em Informatica (CEAD)
 *
 *        Version:  1.0
 *        Created:  29/04/2015 18:54:38
 *       Revision:  none
 *       Compiler:  clang/gcc
 *
 *         Author:  Rafael S. Guimaraes (rafaelg@ifes.edu.br),
 *   Organization:  IFES - Campus Cachoeiro de Itapemirim
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declaracao da estrutura Aluno
typedef struct aluno {
    int matricula;
    char nome[30];
    int idade;
    char serie[20];
    float nota_trabalho;
    float nota_prova;
    float media;
}Aluno;

// Funcao para o cadastro de alunos em um arquivo
void cadastrarAluno(){
    FILE *fp;
    Aluno aux;

    printf("\n\tInforme a matricula do aluno: ");
    scanf("%i",&aux.matricula);
    getchar();
    printf("\tInforme o nome do aluno: ");
    gets(aux.nome);
    printf("\tInforme a idade do aluno: ");
    scanf("%i",&aux.idade);
    getchar();
    printf("\tInforme a serie: ");
    gets(aux.serie);
    printf("\tInforme a nota do trabalho: ");
    scanf("%f",&aux.nota_trabalho);
    printf("\tInforme a nota da prova: ");
    scanf("%f",&aux.nota_prova);

    aux.media = (aux.nota_trabalho + aux.nota_prova)/2;

    // Abre o arquivo com a opcao "ab" para anexar uma nova informacao
	fp = fopen("alunos.dat","a+b");
	if(fwrite(&aux,sizeof(Aluno),1,fp)!=1)
	   printf("Gravado no arquivo com sucesso...\n");
    fclose(fp);
    system("\n\npause");
    system("clear");
}

//Imprimir os dados dos alunos gravados no arquivo
void imprimirAlunos(){
    Aluno aux;
    FILE *fp;

    fp = fopen("alunos.dat","rb");
    // Verifica se foi possivel abrir o arquivo para "ler um binario == rb"
    if(!fp){
        printf("\nNao existe produto cadastrado. \n");
        system("\n\npause");
        system("clear");
    }else{
        // Ler o dado em uma determinada posicao do arquivo
        fread(&aux, sizeof(Aluno), 1,fp);
        do{
            printf("\n\tMATRICULA: %i\n", aux.matricula);
            printf("\tNOME: %s\n", aux.nome);
            printf("\tIDADE: %i\n", aux.idade);
            printf("\tSERIE: %s\n", aux.serie);
            printf("\tNOTA TRABALHO: %.2f\n", aux.nota_trabalho);
            printf("\tNOTA PROVA: %.2f\n", aux.nota_prova);
            printf("\tMEDIA: %.2f\n", aux.media);
            fread(&aux, sizeof(Aluno), 1,fp);
        }while(!feof(fp));

        fclose(fp);
        system("\n\npause");
        system("clear");
    }
}
//Imprimir apenas os alunos aprovados.
void imprimirAlunosAprovados(float media){
    Aluno aux;
    FILE *fp;

    fp = fopen("alunos.dat","rb");
    // Verifica se foi possivel abrir o arquivo para "ler um binario == rb"
    if(!fp){
        printf("\nNao existe produto cadastrado. \n");
        system("\n\npause");
        system("clear");
    }else{
        // Ler o dado em uma determinada posicao do arquivo
        fread(&aux, sizeof(Aluno), 1, fp);

        do {

            if (aux.media >= media) {
                printf("\n\tMATRICULA: %i\n", aux.matricula);
                printf("\tNOME: %s\n", aux.nome);
                printf("\tIDADE: %i\n", aux.idade);
                printf("\tSERIE: %s\n", aux.serie);
                printf("\tNOTA TRABALHO: %.2f\n", aux.nota_trabalho);
                printf("\tNOTA PROVA: %.2f\n", aux.nota_prova);
                printf("\tMEDIA: %.2f\n", aux.media);
            }
            fread(&aux, sizeof(Aluno), 1, fp);
        }while (!feof(fp)); // Enquanto nao for o final do arquivo

        fclose(fp);
        system("\n\npause");
        system("cls");
    }

}

void imprimirAlunosOrdenados(){
    Aluno aux;
    FILE *fp;

    fp = fopen("alunos.dat","rb");

    // Verifica se foi possivel abrir o arquivo para "ler um binario == rb"
    if(!fp){
        printf("\nNao existe produto cadastrado. \n");
        system("\n\npause");
        system("clear");
    }else{
        // Ler o dado em uma determinada posicao do arquivo
        fread(&aux, sizeof(Aluno), 1, fp);

        do {
            printf("\n\tMATRICULA: %i\n", aux.matricula);
            printf("\tNOME: %s\n", aux.nome);
            printf("\tIDADE: %i\n", aux.idade);
            printf("\tSERIE: %s\n", aux.serie);
            printf("\tNOTA TRABALHO: %.2f\n", aux.nota_trabalho);
            printf("\tNOTA PROVA: %.2f\n", aux.nota_prova);
            printf("\tMEDIA: %.2f\n", aux.media);
            fread(&aux, sizeof(Aluno), 1, fp);
        }while (!feof(fp)); // Enquanto nao for o final do arquivo

        fclose(fp);
        system("\n\npause");
        system("cls");
    }
}
//Funcao para alterar os dados do Aluno
void alterarAluno(int id){
    Aluno aux;
    int verdade = 0;
    FILE *fp;

    fp = fopen("alunos.dat","r+b");

    // Verificando a existencia do aluno.
    while (!feof(fp)) { // Enquanto nao for o final do arquivo
        // Ler o dado em uma determinada posicao do arquivo
        fread(&aux, sizeof(Aluno), 1,fp);
        //Se encontrou o aluno
        if (aux.matricula == id){
            verdade = 1;
            break;
        }
    }
    //Se verdade, modifica as informacoes do usuario
    if (verdade == 1) {
        // Alterando os dados do aluno.
        printf("\n\tInforme a matricula do aluno: ");
        scanf("%i",&aux.matricula);
        getchar();
        printf("\tInforme o nome do aluno: ");
        gets(aux.nome);
        printf("\tInforme a idade do aluno: ");
        scanf("%i",&aux.idade);
        getchar();
        printf("\tInforme a serie: ");
        gets(aux.serie);
        printf("\tInforme a nota do trabalho: ");
        scanf("%f",&aux.nota_trabalho);
        printf("\tInforme a nota da prova: ");
        scanf("%f",&aux.nota_prova);

        //Posiciona o cursor para uma referencia anterior
        fseek(fp, - sizeof(Aluno), SEEK_CUR);
        fwrite(&aux, sizeof(Aluno), 1,fp);
        fclose(fp);
    }
    else {
        printf("\nO produto nao foi encontrado. \n");
        system("\n\npause");
        system("clear");
    }
}

int main(){
    int opc,identificador;
    float media;

    while(1){
        // Menu de opcoes
        system("clear");
        printf("\t#############################################\n");
        printf("\t#                     MENU                  #\n");
        printf("\t#############################################\n");
        printf("\t#  1 - CADASTRAR ALUNO                      #\n");
        printf("\t#  2 - ALTERAR DADOS DO ALUNO               #\n");
        printf("\t#  3 - IMPRIMIR ALUNOS                      #\n");
        printf("\t#  4 - IMPRIMIR ALUNOS APROVADOS            #\n");
        printf("\t#  5 - IMPRIMIR ALUNOS (ORDEM ALFABETICA)   #\n");
        printf("\t#  0 - Sair                                 #\n");
        printf("\t#############################################\n");
        printf("\t## Informe uma opcao: ");
        scanf("%i",&opc);

        system("clear");

        switch(opc){
            case 1:
                // Chama o procedimento para o cadastro do aluno
                cadastrarAluno();
				break;
            case 2:
                // Altera o valor de algum aluno passando a sua matricula
                printf("Digite a matricula do aluno a ser alterado: ");
                scanf("%i", &identificador);
                alterarAluno(identificador);
                break;
            case 3:
                // Imprime os dados de todos os alunos
                imprimirAlunos();
                break;
            case 4:
                // Imprime os dados dos alunos pela referencia da media a ser definida
                printf("Digite a media: ");
                scanf("%f", &media);
                imprimirAlunosAprovados(media);
                break;
            case 5:
                // Imprime os dados de todos os alunos ordenados pelo nome
                imprimirAlunosOrdenados();
                break;
            case 0:
                // Finaliza a execucao do software
                exit(0);
                break;
        }
    }
}
