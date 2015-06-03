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
    for(i=0;i<qtd;i++){
        printf("ID_ALUNO: %i\n", v[i].id_aluno);
        printf("NOME: %s\n", v[i].nome);
        printf("IDADE: %i\n", v[i].idade);
    }
    system("pause");
}
void cadastrarProfessores(Professor *v, int qtd){
    int i;

    for(i=0;i<qtd;i++){
        printf("Informe o ID do professor: ");
        scanf("%i",&v[i].id_aluno);
        getchar();
        printf("Informe o nome do professor: ");
        gets(v[i].nome);
        printf("Informe a idade do professor: ");
        scanf("%i",&v[i].idade);
    }
}
void exibirProfessores(Professor *v, int qtd){
    int i;
    for(i=0;i<qtd;i++){
        printf("ID_PROFESSOR: %i\n", v[i].id_professor);
        printf("NOME: %s\n", v[i].nome);
        printf("IDADE: %i\n", v[i].idade);
    }
    system("pause");
}
void cadastrarCursos(Curso *v, int qtd){
    int i;

    for(i=0;i<qtd;i++){
        printf("Informe o ID do curso: ");
        scanf("%i",&v[i].id_curso);
        getchar();
        printf("Informe o nome do professor: ");
        gets(v[i].nome);
        printf("Informe a descricao do professor: ");
        gets(v[i].descricao);
    }
}
void exibirCursos(Curso *v, int qtd){
    int i,j;
    for(i=0;i<qtd;i++){
        printf("ID_CURSO: %i\n", v[i].id_curso);
        printf("NOME: %s\n", v[i].nome);
        printf("DESCRICAO: %s\n", v[i].descricao);
        printf("DISCIPLINAS: ");
        for(j=0;j<20;j++){
            printf("%i ",v[i].id_disciplinas[j]);
        }
        printf("\n");
        printf("ALUNOS: ");
        for(j=0;j<30;j++){
            printf("%i ",v[i].id_alunos[j]);
        }
        printf("\n");
    }
    system("pause");
}
void cadastrarDisciplinas(Disciplina *v, int qtd){
    int i;

    for(i=0;i<qtd;i++){
        printf("Informe o ID da disciplina: ");
        scanf("%i",&v[i].id_disciplina);
        getchar();
        printf("Informe o nome da disciplina: ");
        gets(v[i].nome);
        printf("Informe a ementa da disciplina: ");
        gets(v[i].ementa);
    }
}
void exibirDisciplinas(Disciplina *v, int qtd){
    int i;
    for(i=0;i<qtd;i++){
        printf("ID_DISCIPLINA: %i\n", v[i].id_disciplina);
        printf("NOME: %s\n", v[i].nome);
        printf("EMENTA: %s\n", v[i].ementa);
    }
    system("pause");
}
int main(){
    Aluno *v_alunos;
    Professor *v_professores;
    Disciplina *v_disciplinas;
    Curso *v_cursos;
    int qtd_alunos, qtd_professores, qtd_disciplinas, qtd_cursos;
    int opc,i,j;

    while(1){
        system("cls");
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

        switch(opc){
            case 1:
                printf("Informe a quantidade de alunos: ");
                scanf("%i",&qtd_alunos);
                v_alunos = (Aluno *)malloc(qtd_alunos * sizeof(Aluno));
                cadastrarAlunos(v_alunos, qtd_alunos);
				break;
            case 2:
                printf("Informe a qtd de professores: ");
                scanf("%i",&qtd_professores);
                v_professores = (Professor *)malloc(qtd_professores * sizeof(Professor));
                cadastrarProfessores(v_professores, qtd_professores);
                break;
            case 3:
                printf("Informe a qtd de cursos: ");
                scanf("%i",&qtd_cursos);
                v_cursos = (Curso *)malloc(qtd_cursos * sizeof(Curso));
                cadastarCursos(v_cursos, qtd_cursos);
                break;
            case 4:
                printf("Informe a qtd de disciplinas: ");
                scanf("%i",&qtd_disciplinas);
                v_disciplinas = (Disciplina *)malloc(qtd_disciplinas * sizeof(Disciplina));
                cadastrarDisciplinas(v_disciplinas, qtd_disciplinas);
                break;
            case 5:
                exibirAlunos(v_alunos, qtd_alunos);
                break;
            case 6:
                exibirProfessores(v_professores, qtd_professores);
                break;
            case 7:
                exibirCursos(v_cursos, qtd_cursos);
                break;
            case 8:
                exibirDisciplinas(v_disciplinas, qtd_disciplinas);
                break;
            case 9:
                int id;
                printf("Informe o ID do curso: ");
                scanf("%i",&id);
                //Identificar o curso a ser cadastrado as disciplinas
                for(i=0;i<qtd_cursos;i++){
                    if(v_cursos[i].id_curso == id){
                        for(j=0;j<qtd_disciplinas;j++){
                            v_cursos[i].id_disciplinas[j] = v_disciplinas[j].id_disciplina;
                        }
                        printf("Disciplinas inseridas no curso...\n");
                        break;
                    }
                }
                system("pause");
                break;
            case 10:
                int id;
                printf("Informe o ID do curso: ");
                scanf("%i",&id);
                for(i=0;i<qtd_cursos;i++){
                    if(v_cursos[i].id_curso == id){
                        for(j=0;j<qtd_alunos;j++){
                            v_cursos[i].id_alunos[j] = v_alunos[j].id_aluno;
                        }
                        printf("Alunos inseridos no curso...\n");
                        break;
                    }
                }
                system("pause");
                break;
            case 0:
                exit(0);
                break;
        }
    }
}
