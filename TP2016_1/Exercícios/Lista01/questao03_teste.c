#include <stdio.h>
#include <stdlib.h>

void cadastroHabitantes(){
    int resp=1;
    float salario, numFilhos, maiorSalario=0;
    float somaNumFilhos=0, somaSalarios=0;
    float numPessoas=0, numAte750=0;

    do{
        system("cls");
        printf("Informe o salario: ");
        scanf("%f", &salario);
        printf("Informe o num de filhos: ");
        scanf("%f", &numFilhos);

        numPessoas++;
        somaNumFilhos += numFilhos;
        somaSalarios += salario;

        if(salario <= 750){
            numAte750++;
        }
        if(salario > maiorSalario){
            maiorSalario = salario;
        }
        printf("Deseja cadastrar mais pessoas? (1-Sim)(0-Nao): ");
        scanf("%d", &resp);

    }while(resp == 1);

    system("cls");
    printf("Media de salario: %.2f\n", (somaSalarios/numPessoas));
    printf("Media do numero de filhos: %.2f\n", (somaNumFilhos/numPessoas));
    printf("Maior Salario: %.2f\n", maiorSalario);
    printf("Perc. pessoas com sal. ate 750: %.2f\n",((numAte750*100)/numPessoas));
}

int main(){
    cadastroHabitantes();
}
