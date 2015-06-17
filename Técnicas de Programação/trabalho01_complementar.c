#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    int id_aluno;
    char nome[30];
    int idade;
}Aluno;

void cadastrarAlunos(Aluno *v, int qtd){
    int i;
    FILE *fp;

    for(i=0;i<qtd;i++){
        printf("\n\tInforme o ID do alunos: ");
        scanf("%i",&v[i].id_aluno);
        getchar();
        printf("\tInforme o nome do aluno: ");
        gets(v[i].nome);
        printf("\tInforme a idade do aluno: ");
        scanf("%i",&v[i].idade);
		system("clear");
	}

	fp = fopen("arquivoAluno.bin","wb");
	if(fwrite(&v[0],sizeof(Aluno),1,fp)!=1)
	   printf("Gravado no arquivo com sucesso...\n");
    fclose(fp);
    fp = fopen("qtdAlunos.bin","wb");
    if(fwrite(&qtd,sizeof(int),1,fp)!=1)
       printf("Gravado no arquivo com sucesso...\n");
    fclose(fp);
}

int exibirAlunos(Aluno *v, int qtd){
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
   		//printf("Falha ao ler no arquivo!\n");
   		//system("pause");
   		//for(i=0;i<qtd;i++){
   			printf("\n\tID_ALUNO: %i\n", alu.id_aluno);
            printf("\tNOME: %s\n", alu.nome);
            printf("\tIDADE: %i\n", alu.idade);
         // }
          printf("\n");
	  fclose(fp);
    system("sleep 2");
}

int main(){
    Aluno *v_alunos,*auxV;
    int opc,i;
    int qtd_alunos;
    while(1){
        system("clear");
        printf("#######################################\n");
        printf("#               MENU                  #\n");
        printf("#######################################\n");
        printf("#  1 - CADASTRAR Alunos               #\n");
        printf("#  2 - CADASTRAR Professor            #\n");
        printf("#  3 - CADASTRAR Curso                #\n");
        printf("#  4 - CADASTRAR Discipina            #\n");
        printf("#  5 - EXIBIR Alunos                  #\n");
        printf("#  6 - EXIBIR Professores             #\n");
        printf("#  7 - EXIBIR Cursos                  #\n");
        printf("#  8 - EXIBIR Disciplinas             #\n");
        printf("#  9 - CADASTRAR disciplina/curso     #\n");
        printf("# 10 - CADASTRAR alunos/curso         #\n");
        printf("#  0 - Sair                           #\n");
        printf("#######################################\n");
        printf("## Informe uma opcao: ");
        scanf("%i",&opc);

        system("clear");

        switch(opc){
            case 1:

                printf("Informe a quantidade de alunos: ");
                scanf("%i",&qtd_alunos);
                v_alunos = (Aluno *)malloc(qtd_alunos * sizeof(Aluno));
                cadastrarAlunos(v_alunos, qtd_alunos);
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
			case 6:

                break;
            case 7:

                break;
            case 8:

                break;
            case 9:

                break;
            case 10:

                break;
            case 0:
                exit(0);
                break;
        }
    }
}





