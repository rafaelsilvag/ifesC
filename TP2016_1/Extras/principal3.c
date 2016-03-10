#include <stdio.h>
#include <stdlib.h>
#define INSS 0.18
#define IR 0.04

void cadastrarSalario(float *x){
    float sal;
    system("cls");
    printf("\t\t\tInforme o salario: ");
    scanf("%f",&sal);

    *x = sal;
}

void visualizarSalBruto(float sal){
    system("cls");
    printf("\t\t\tSalario Bruto: %.2f\n",sal);
}
float valorInss(float sal){
    return (sal * INSS);
}
float valorIr(float sal){
    return (sal * IR);
}
void calcularSalLiquido(float sal, float *salLiquido){
    *salLiquido = valorInss(sal)+valorIr(sal);
    *salLiquido = sal - *salLiquido;
}
void visualizarSalLiquido(float salLiquido){
    system("cls");
    printf("\t\t\tSalario Liquido: %.2f\n", salLiquido);
}


int main(){
    int opcMenu;
    float salario, salarioLiquido;

    do{
        system("cls");
        printf("\t\t\t######### MENU #########\n");
        printf("\t\t\t# 1 - Cad. Salario      \n");
        printf("\t\t\t# 2 - Vis. Salario Bruto\n");
        printf("\t\t\t# 3 - Vis. Salario Liq. \n");
        printf("\t\t\t# 4 - Vis. Valor INSS.  \n");
        printf("\t\t\t# 5 - Vis. Valor IR.    \n");
        printf("\t\t\t# 0 - Sair              \n");
        printf("\t\t\t########################\n");
        printf("\t\t\tInforme uma opcao: ");
        scanf("%d", &opcMenu);

        switch(opcMenu){
            case 1:
                cadastrarSalario(&salario);
                break;
            case 2:
                visualizarSalBruto(salario);
                break;
            case 3:
                calcularSalLiquido(salario, &salarioLiquido);
                visualizarSalLiquido(salarioLiquido);
                break;
            case 4:
                system("cls");
                printf("Valor INSS: %.2f\n",valorInss(salario));
                break;
            case 5:
                system("cls");
                printf("Valor IR: %.2f\n",valorIr(salario));
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
