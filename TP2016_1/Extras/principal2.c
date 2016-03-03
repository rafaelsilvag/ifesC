#include <stdio.h>

int main(){
    int opcMenu;
    float salario, salarioLiquido;

    do{
        system("cls");
        printf("\t\t\t######### MENU #########\n");
        printf("\t\t\t# 1 - Cad. Salario      \n");
        printf("\t\t\t# 2 - Vis. Salario Bruto\n");
        printf("\t\t\t# 3 - Vis. Salario Liq. \n");
        printf("\t\t\t# 0 - Sair              \n");
        printf("\t\t\t########################\n");
        printf("\t\t\tInforme uma opcao: ");
        scanf("%d", &opcMenu);

        switch(opcMenu){
            case 1:
                system("cls");
                printf("\t\t\tInforme o salario: ");
                scanf("%f",&salario);
                break;
            case 2:
                system("cls");
                printf("\t\t\tSalario Bruto: %.2f\n",salario);
                break;
            case 3:
                system("cls");
                salarioLiquido = (salario * 0.13)+(salario*0.02);
                salarioLiquido = salario - salarioLiquido;
                printf("\t\t\tSalario Liquido: %.2f\n", salarioLiquido);
                break;
            case 0:
                system("cls");
                printf("\t\t\tSaindo...\n");
                break;
            default:
                system("cls");
                printf("\t\t\tOpcao Invalida!\n");
                break;
        }
        system("pause");
    }while(opcMenu != 0);
}
