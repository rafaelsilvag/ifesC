#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// Definicao da estrutura do jogador
typedef struct jogador {
    char nome[30];
    int jogada [6];
    int realizouJogada = 0;
    int numAcertos = 0;
}Jogador ;
void gerarSorteio(int sorteio [6] , Jogador ∗jogadores , int qtd){
    // Gerar Sorteio
}
void realizarJogada(Jogador jogador){
    // Realizar Jogada de cada jogador
}
int main(){
    Jogador *jogadores;
    int i, qtdJogadores, opc;
    // Melhorar a funcao de aleatoriedade
    srand( (unsigned) time( NULL )) ;

    printf("Informe o numero de Jogadores: ");
    scanf("%i",&qtdJogadores);
    jogadores = (Jogadores *)malloc(sizeof(Jogadores) * qtdJogadores);
    do {
        printf("########## MENU ##########\n");
        printf("1 - Realizar Jogada       \n");
        printf("2 - Cadastrar Jogadores   \n");
        printf("3 - Realizar Sorteio      \n");
        printf("0 - Sair                  \n");
        printf("##########################\n");
        printf("Informe uma opcao: ");
        scanf("%i",&opc);
        switch(opc){
            case 1:
                    break;
            case 2:
                    break;
            case 3: break;
            case 0:
                    break;
            default:
                    break;
        }
    }while(opc != 0);
}
