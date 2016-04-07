#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(){
    system("clear");
    printf("########### MENU ############\n");
    printf("# 1 - Cadastrar Usuario     #\n");
    printf("# 2 - Deletar Usuario       #\n");
    printf("# 3 - Visualizar Usuarios   #\n");
    printf("# 0 - Sair                  #\n");
    printf("#############################\n");
    getchar();
}
int main(){
    int sair=0;
    char usuario[10];
    char senha[10];

    do{
        system("clear");
        printf("\n\n\n\t\t\tUsuario: ");
        scanf("%s", usuario);
        printf("\t\t\tSenha: ");
        scanf("%s", senha);
        if(strcmp(usuario, "admin") == 0){
            if(strcmp(senha, "123456")==0){
                menu();
            }else{
                system("clear");
                printf("\n\n\n\t\t\tSenha invalida!\n");
                system("sleep 2");
            }
        }else{
            system("clear");
            printf("\n\n\n\t\t\tUsuario invalido!\n");
            system("sleep 2");
        }
        printf("\t\t\tDeseja Sair? (1-Sim 0-Nao)");
        scanf("%i",&sair);
    }while(sair==0);
}
