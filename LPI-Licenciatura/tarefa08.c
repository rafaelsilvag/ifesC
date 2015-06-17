#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    int matricula;
    char nome[30];
    int idade;
    char serie[20];
    float nota_trabalho;
    float nota_prova;
    float media;
}Aluno;

void cadastrarAlunos(){
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
    getchar()
    printf("\tInforme a serie: ");
    gets(aux.serie);
    printf("\tInforme a nota do trabalho: ");
    scanf("%f",&aux.nota_trabalho);
    printf("\tInforme a nota da prova: ");
    scanf("%f",&aux.nota_prova);

    aux.media = (nota_trabalho + nota_prova)/2;

	fp = fopen("arquivoAluno.bin","ab");
	if(fwrite(&aux,sizeof(Aluno),1,fp)!=1)
	   printf("Gravado no arquivo com sucesso...\n");
    fclose(fp);
}

int imprimirAlunos(Aluno *v, int qtd){
    FILE *fp;
    Aluno alu;
	int i;
    fp = fopen("arquivoAluno.bin","rb");
    if(fp == NULL){
    	printf("Nao foi possivel abrir o arquivo.\n");
        system("sleep 2");
        return 0;
	}
   	fread(&alu,sizeof(Aluno),1,fp);
    printf("\n\tMATRICULA: %i\n", alu.matricula);
    printf("\tNOME: %s\n", alu.nome);
    printf("\tIDADE: %i\n", alu.idade);
    printf("\tSERIE: %s\n", alu.serie);
    printf("\tNOTA TRABALHO: %.2f\n", alu.nota_trabalho);
    printf("\tNOTA PROVA: %.2f\n", alu.nota_prova);
    printf("\tMEDIA: %.2f\n", alu.media);
    printf("\n");
	fclose(fp);
    system("sleep 2");
}

int main(){
    int opc,i;
    while(1){
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
                cadastrarAluno();
				break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:
                exibirAlunos(v_alunos, qtd_alunos);
                break;
            case 0:
                exit(0);
                break;
        }
    }
}





