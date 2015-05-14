#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    int id_aluno;
    char nome[30];
    int idade;
}Aluno;

typedef struct professor{
    int id_professor;
    char nome[30];
    int idade;
}Professor;

typedef struct disciplina {
    int id_disciplina;
    char nome[30];
    char ementa[100];
}Disciplina;

typedef struct curso {
    int id_curso;
    char nome[30];
    char descricao[100];
    int id_alunos[30];
    int id_disciplinas[20];
}Curso;

void cadastrarAlunos(Aluno *v, int qtd){
    int i;

    for(i=0;i<qtd;i++){
        printf("Informe o ID do alunos: ");
        scanf("%i",&v[i].id_aluno);
        getchar();
        printf("Informe o nome do aluno: ");
        gets(v[i].nome);
        printf("Informe a idade do aluno: ");
        scanf("%i",&v[i].idade);
    }
}
void exibirAlunos(Aluno *v, int qtd){
    int i;
    printf("Quantidade de alunos: %i\n",qtd);
    for(i=0;i<qtd;i++){
        printf("ID_ALUNO: %i\n", v[i].id_aluno);
        printf("NOME: %s\n", v[i].nome);
        printf("IDADE: %i\n", v[i].idade);
    }
}
int main(){
    Aluno *v_alunos;
    Professor *v_professores;
    Disciplina *v_disciplinas;
    Curso *v_cursos;
    int qtd_alunos, qtd_professores, qtd_disciplinas, qtd_cursos;
    int opc;

    while(1){
        system("cls");
        printf("#######################################\n");
        printf("#               MENU                  #\n");
        printf("#######################################\n");
        printf("#  1 - CADASTRAR Alunos               #\n");
        printf("#  2 - CADASTRAR Profesor             #\n");
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

        switch(opc){
            case 1:
                printf("Informe a quantidade de alunos: ");
                scanf("%i",&qtd_alunos);
                v_alunos = (Aluno *)malloc(qtd_alunos * sizeof(Aluno));
                cadastrarAlunos(v_alunos, qtd_alunos);
				break;
            case 2:
                //qtd_professores = cadastrarProfessores(v_professores);
                break;
            case 3:
                //qtd_cursos = cadastrarCursos(v_cursos);
                break;
            case 4:
                //qtd_disciplinas = cadastrarDisciplinas(v_disciplinas);
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
