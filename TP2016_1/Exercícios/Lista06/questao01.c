#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cliente {
    int idCliente;
    char nome[30];
    int ativo;
    int idade;
}Cliente;

int main(){
    Cliente cli;
    int opc;
    FILE *arq;
    arq = fopen("clientes.bin", "a+b");

    do{
        system("clear");
        printf("############# MENU ############\n");
        printf("# 1 - Cadastrar Cliente       #\n");
        printf("# 2 - Alterar Cliente         #\n");
        printf("# 3 - Deletar Cliente         #\n");
        printf("# 4 - Listar Clientes         #\n");
        printf("# 0 - Sair                    #\n");
        printf("###############################\n");
        printf("Informe uma opcao: ");
        scanf("%i",&opc);
        switch(opc){
            case 1:
                    system("clear");
                    printf("Informe o id do cliente: ");
                    scanf("%i",&cli.idCliente);
                    getchar();
                    printf("Informe o nome: ");
                    gets(cli.nome);
                    printf("Informr a idade: ");
                    scanf("%i",&cli.idade);
                    printf("Cliente ativo? (1-Sim, 0-Nao) ");
                    scanf("%i",&cli.ativo);

                    if(fwrite(&cli,sizeof(Cliente),1,arq) != 1){
                        printf("Erro ao inserir cliente!\n");
                    }
                    break;
            case 2:
                    break;
            case 3:
                    break;
            case 4:
                    break;
            case 0:
                    break;
            default:
                    break;
        }
    }while(opc!=0);
}
