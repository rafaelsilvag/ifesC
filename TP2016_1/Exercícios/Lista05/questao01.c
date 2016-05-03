#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// Definicao da estrutura do jogador
typedef struct jogador {
    char nome[30];
    int jogada [6];
    int realizouJogada;
    int numAcertos;
}Jogador;

void gerarSorteio(int sorteio[6], Jogador *jogadores, int qtd){
    // Gerar Sorteio
    int i,j,z;
    for(i=0;i<6;i++){
        sorteio[i] = (rand() % 30) + 1;
    }
    // A qtd de acertos de cada jogador
    for(i=0;i<qtd;i++){
        if(jogadores[i].realizouJogada){
            for(j=0;j<6;j++){
                for(z=0;z<6;z++){
                    if(jogadores[i].jogada[j] == sorteio[z]){
                        jogadores[i].numAcertos++;
                        break;
                    }
                }
            }
        }
    }
    // Imprimir os valores de cada jogador
    for(i=0;i<qtd;i++){
        printf("############################\n");
        printf("Nome: %s\n",jogadores[i].nome);
        printf("Jogadas: ");
        for(j=0;j<6;j++){
            printf("%i ",jogadores[i].jogada[j]);
        }
        printf("\n");
        printf("Numero de acertos: %i\n",jogadores[i].numAcertos);
    }
}
void realizarJogada(Jogador *jogador){
    // Realizar Jogada de cada jogador
    int numJog = 0;
    int valor;
    while(numJog < 6){
        printf("Informe um valor: ");
        scanf("%i", &valor);
        if(valor >= 1 && valor <=30){
            jogador->jogada[numJog] = valor;
            numJog++;
        }else{
            printf("Jogada invalida!!\n");
        }
    }
    jogador->realizouJogada = 1;
}
int main(){
    Jogador *jogadores;
    int i, qtdJogadores, opc;
    int sorteio[6];
    // Melhorar a funcao de aleatoriedade
    srand( (unsigned) time( NULL )) ;

    printf("Informe o numero de Jogadores: ");
    scanf("%i",&qtdJogadores);

    jogadores = (Jogador *)malloc(sizeof(Jogador) * qtdJogadores);

    do {
        printf("########## MENU ##########\n");
        printf("1 - Realizar Jogada       \n");
        printf("2 - Cadastrar Jogadores   \n");
        printf("3 - Realizar Sorteio      \n");
        printf("0 - Sair                  \n");
        printf("##########################\n");
        printf("Informe uma opcao: ");
        scanf("%i",&opc);
	getchar();
        switch(opc){
            case 1:
                    for(i=0;i<qtdJogadores;i++){
                        printf("=> Realizar jogada de %s\n",jogadores[i].nome);
                        realizarJogada(&jogadores[i]);
                    }
                    break;
            case 2:
                    for(i=0;i<qtdJogadores;i++){
                        printf("Informe o nome do jogador: ");
                        gets(jogadores[i].nome);
                        jogadores[i].realizouJogada = 0;
                        jogadores[i].numAcertos = 0;
                    }
                    break;
            case 3:
                    gerarSorteio(sorteio, jogadores, qtdJogadores);
                    break;
            case 0:
                    break;
            default:
                    break;
        }
    }while(opc != 0);
}
