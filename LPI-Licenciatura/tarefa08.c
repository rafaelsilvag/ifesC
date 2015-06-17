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
    int i;
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
	fp = fopen("alunos.dat","ab");
	if(fwrite(&aux,sizeof(Aluno),1,fp)!=1)
	   printf("Gravado no arquivo com sucesso...\n");
    fclose(fp);
}

//Imprimir os dados dos alunos gravados no arquivo
void imprimirAlunos(){
    Aluno aux;
    FILE *fp;

    fp = fopen("alunos.dat","rb");

    if(!fp){
        printf("\nNao existe produto cadastrado. \n");
    }else{

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

//Funcao para alterar os dados do Aluno
void alterarAluno(int id){
    Aluno aux;
    int verdade = 0;
    FILE *fp;

    fp = fopen("alunos.dat","r+b");

    // Verificando a existencia do aluno.
    while (feof(fp) == 0) {

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

        //Posiciona para uma referencia anterior
        fseek(fp, - sizeof(Aluno), SEEK_CUR);
        fwrite(&aux, sizeof(Aluno), 1,fp);
        fclose(fp);
    }
    else {
        printf("\nO produto nao foi encontrado. \n");
    }
}

int main(){
    int opc,i,identificador;

    while(1){
        // Menu de opcoes
        system("clear");
        printf("###########################################\n");
        printf("#                   MENU                  #\n");
        printf("###########################################\n");
        printf("#  1 - CADASTRAR ALUNO                    #\n");
        printf("#  2 - ALTERAR DADOS DO ALUNO             #\n");
        printf("#  3 - IMPRIMIR ALUNOS                    #\n");
        printf("#  4 - IMPRIMIR ALUNOS APROVADOS          #\n");
        printf("#  5 - IMPRIMIR ALUNOS (ORDEM ALFABETICA) #\n");
        printf("#  0 - Sair                               #\n");
        printf("###########################################\n");
        printf("## Informe uma opcao: ");
        scanf("%i",&opc);

        system("clear");

        switch(opc){
            case 1:
                //Chama o procedimento para o cadastro do aluno
                cadastrarAluno();
				break;
            case 2:
                printf("Digite a matricula do aluno a ser alterado: ");
                scanf("%i", &identificador);
                alterarAluno(identificador);
                break;
            case 3:
                imprimirAlunos();
                break;
            case 4:
                break;
            case 5:
                break;
            case 0:
                exit(0);
                break;
        }
    }
}





