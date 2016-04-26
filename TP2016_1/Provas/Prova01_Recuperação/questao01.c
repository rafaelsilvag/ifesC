#include <stdio.h>
#include <stdlib.h>

int jogarMoeda(){
    // Implementar a funcao jogarMoeda() // 5.0 pontos
    // Utilize a funcao rand() % 2 que retorna o valor 0 ou 1
    int res = rand() % 2;
    return res;
}
int main(){
    int i, caras=0, coroas=0;
    int N;
    srand((unsigned) time(NULL));
    // Capturar o Valor de N   2,0 pontos
    printf("Informe o numero de jogadas: ");
    scanf("%i",&N);
    for(i=1;i<=N;i++){
        // Calcula quantas jogadas deram Cara ou Coroa
        // imprimir cada jogada              3.0 pontos
        if(jogarMoeda()==1){
            printf("Cara\n");
            caras++;
        }else{
            printf("Coroa\n");
            coroas++;
        }
    }
    printf("Caras: %i\n",caras);
    printf("Coroas: %i\n",coroas);
    system("pause");
}
