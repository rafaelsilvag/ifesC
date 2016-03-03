#include <stdio.h>
#include <stdlib.h>

int main(){
	int opc,i;
	float salario=0;

    do{
        system("clear");
        printf("########## MENU ##########\n");
        printf("# 1 - Cad. Salario        \n");
        printf("# 2 - Imp. Sal. Bruto     \n");
        printf("# 3 - Imp. Sal. Liquido   \n");
        printf("# 0 - Sair                \n");
        printf("##########################\n");
        printf("Informe uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
            case 1:
                // Cadastrar salario
                printf("Informe o valor do salario: ");
                scanf("%f",&salario);
                break;
            case 2:
                // Imprimir salario bruto
                system("clear");
                printf("\n\n\n\tSalario Bruto: %.2f\n",salario);
                system("sleep 3");
                break;
            case 3:
                // Imprimir salario liquido
                break;
            case 0:
                // Sair
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }while(opc!=0);
}
