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

int main(){

    int opc;
    while(1){
        system("cls");
        printf("#######################################\n");
        printf("#               MENU                  #\n");
        printf("#######################################\n");
        printf("#  1 - Cadastar Aluno                 #\n");
        printf("#  2 - Cadastar Professor             #\n");
        printf("#  3 - Cadastar Curso                 #\n");
        printf("#  4 - Cadastar Disciplina            #\n");
        printf("#  5 - Exibir Alunos                  #\n");
        printf("#  6 - Exibir Professores             #\n");
        printf("#  7 - Exibir Cursos                  #\n");
        printf("#  8 - Exibir Disciplinas             #\n");
        printf("#  9 - Cadastrar disciplina/curso     #\n");
        printf("# 10 - Cadastrar alunos/curso         #\n");
        printf("#  0 - Sair                           #\n");
        printf("#######################################\n");
        printf("## Informe uma opcao: ");
        scanf("%i",&opc);
        switch(opc){
            case 1:
				break;

        }
    }
}
