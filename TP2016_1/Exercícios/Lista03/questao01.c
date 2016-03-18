/*
    Lista 03 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define VP 5

// Estrutura para armazenar os dados da pessoa
struct pessoa {
    char nome[30];
    float altura;
    float peso;
};
// Funcao para calcular o IMC
float calculaIMC(float altura, float peso){
    float imc;
    imc = peso / pow(altura,2);
    return imc;
}
void lerDados(struct pessoa v[VP]){
    int i;
    for(i=0;i<VP;i++){
        printf("Informe o nome: ");
        gets(v[i].nome);
        printf("Informe a altura: ");
        scanf("%f",&v[i].altura);
        printf("Informe o peso: ");
        scanf("%f",&v[i].peso);
        getchar();
    }
}
void impClass(float imc){
    if(imc < 18.5){
        printf("Classificacao: Abaixo do peso\n");
        printf("Risco de saude: Muito baixo\n");
    }else if(imc >= 18.5 && imc < 25){
        printf("Classificacao: Peso Normal\n");
        printf("Risco de saude: Baixo\n");
    }else if(imc >= 25 && imc < 30){
        printf("Classificacao: Pre-obesidade\n");
        printf("Risco de saude: Medio\n");
    }else if(imc >= 30 && imc < 35){
        printf("Classificacao: Obesidade Grau I\n");
        printf("Risco de saude: Alto\n");
    }else if(imc >= 35 && imc < 40){
        printf("Classificacao: Obesidade Grau II\n");
        printf("Risco de saude: Muito Alto\n");
    }else if(imc >= 40){
        printf("Classificacao: Obesidade Grau III\n");
        printf("Risco de saude: Muitissimo Alto\n");
    }
}
void imprimirDados(struct pessoa v[VP]){
    int i;
    system("cls");
    printf("###############################\n");
    for(i=0;i<VP;i++){
        float imc = calculaIMC(v[i].altura, v[i].peso);
        printf("Nome: %s\n",v[i].nome);
        printf("Altura: %.2f\n",v[i].altura);
        printf("Peso: %.2f\n",v[i].peso);
        printf("IMC: %.2f\n", imc);
        impClass(imc);
        printf("###############################\n");
    }
    system("pause");
}
// Funcao principal
int main(){
    struct pessoa vPessoas[VP];
    lerDados(vPessoas);
    imprimirDados(vPessoas);
}
