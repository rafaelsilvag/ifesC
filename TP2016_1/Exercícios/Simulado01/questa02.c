#include <stdio.h>
#include <stdlib.h>
#define TAM 10
void impAltMenorMedia(float alturaAtletas[TAM]){
    int i;
    float somaAlturas=0, mediaAlturas;
    for(i=0;i<TAM;i++){
        somaAlturas += alturaAtletas[i];
    }
    mediaAlturas = somaAlturas / TAM;
    for(i=0;i<TAM;i++){
        if(alturaAtletas[i] < mediaAlturas){
            printf("Atleta %i, com altura %.2f\n",i+1,alturaAtletas[i]);
        }
    }
    system("pause");
}
int main(){
    float alturaAtletas[TAM] ;
    int i;
    // Ler a altura dos atletas
    for(i=0;i<TAM;i++){
        printf("Informe a altura do atleta %i: ",i+1);
        scanf("%f",&alturaAtletas[i]);
    }
    impAltMenorMedia(alturaAtletas);
}
