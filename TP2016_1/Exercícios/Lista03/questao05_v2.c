/*
    Lista 03 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 10

void inicializarMatriz(char m[TAM][TAM]){
	int i, j;

	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			m[i][j]='L';
		}
	}
}
void gerarBombas(char m[TAM][TAM]){
    int qtdBombas = 20;
    int i=0,x,y;

    srand((unsigned) time(NULL));

    while(i < qtdBombas){
        x = rand() % TAM;
        y = rand() % TAM;
        m[x][y] = 'B';
        i++;
    }
}
void imprimirMatriz(char m[TAM][TAM]){
    int i,j;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("%c ",m[i][j]);
        }
        printf("\n");
    }
}
void imprimirJogo(char m[TAM][TAM]){
    int i,j;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if(m[i][j]=='B' || m[i][j] == 'L'){
                printf("# ");
            }else{
                printf("@ ");
            }
        }
        printf("\n");
    }
}
int menu(){
    int opc;
    printf("\t################################\n");
    printf("\t1 - Fazer uma jogada\n");
    printf("\t2 - Sair\n");
    printf("\t################################\n");
    printf("\tInforme uma opcao: ");
    scanf("%i",&opc);
    return opc;
}
void realizarJogada(char m[TAM][TAM], char jogador, int *vez){
    int x,y;
    system("clear");
    printf("####### Jogador %c #######\n",jogador);
    printf("Informe o valor de X: ");
    scanf("%i", &x);
    printf("Informe o valor de Y: ");
    scanf("%i", &y);

    if(m[x][y] == 'L'){
        m[x][y] = jogador;
        *vez = *vez + 1;
    }else if(m[x][y] == 'B'){
        system("clear");
        printf("O jogador %c PERDEU!!\n",jogador);
        imprimirMatriz(m);
        system("sleep 2");
        *vez = 1;
        inicializarMatriz(m);
        gerarBombas(m);
    }else{
        system("clear");
        printf("Local nao eh valido!!\n");
        printf("Efetue uma nova jogada!\n");
        system("sleep 2");
    }
}
int main(){
    char campoMinado[TAM][TAM];
    int opc, vez=1;
    // Chama a funcao para inicializar a matriz do campo Minado
    inicializarMatriz(campoMinado);
    gerarBombas(campoMinado);

    do{
        system("clear");
        // Imprime o esta atual do jogo da velha e
        // em seguida, mostra o menu novamente
        imprimirJogo(campoMinado);
        opc = menu();
        switch(opc){
            case 1:
                // Realiza a funcao MOD para alterar entre os 2 jogadores;
                if((vez%2) == 0){
                    realizarJogada(campoMinado, 'Y', &vez);
                }else{
                    realizarJogada(campoMinado, 'X', &vez);
                }
                break;
            case 2:
                break;
            default:
                printf("\tOpcao Invalida!\n");
        }
    }while(opc != 2); // interrompe o loop caso o usuario escolha a opcao 2
}
