/*
    Lista 02 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>

float pes2metros(float pes){
    return (pes * 3.281);
}
int main(){
    float pes;
    // informa o valor em pes
    printf("Informe o numero de pes: ");
    scanf("%f",&pes);
    // chama a funcao pes2metros para converter em metros
    printf("%.2f pes eh igual a %.2f metros\n", pes, pes2metros(pes));
}
