/*
    Lista 02 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>

float pol2cm(float pol){
    return (pol * 2.54);
}

int main(){
    float pol;
    // informa o valor em polegadas
    printf("Informe o numero de polegadas: ");
    scanf("%f",&pol);
    // chama a funcao pol2cm para converter em cm
    printf("O valor em centimetros eh: %.2f\n", pol2cm(pol));
}
