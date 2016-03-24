/*
    Lista 03 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3

void inicializar(char m[][COL]){
    int i,j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            m[i][j] = ' ';
        }
    }
}
void imprimirJogo(char m[][COL]){
    int i,j;
    printf("\t#########JOGO DA VELHA##########\n");
    for(i=0;i<LIN;i++){
        printf("\t\t     *     *\n");
        printf("\t\t");
        for(j=0;j<COL;j++){
            if(j==2){
                printf("  %c  ",m[i][j]);
            }else{
                printf("  %c  *",m[i][j]);
            }
        }
        printf("\n\t\t     *     *\n");
        if(i==2){
            printf("\n");
        }else{
            printf("\t\t ***************\n");
        }
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
int verificarLinhas(char m[][COL], char jogador){
    int i,j;
    int cont=0;
    for(i=0;i<LIN;i++){
        cont = 0;
        for(j=0;j<COL;j++){
            // verifica se o valor eh igual do jogador
            if(m[i][j] == jogador){
                cont++;
            }
        }
        // Se cada linha a contagem for igual a 3
        // O jogador venceu
        if(cont == 3){
            system("clear");
            printf("\t\tJogador %c VENCEU!!\n", jogador);
            system("sleep 2");
            return 1;
        }
    }
    return 0;
}
int verificarColunas(char m[][COL], char jogador){
    int i,j;
    int cont=0;

    for(i=0;i<LIN;i++){
        cont = 0;
        for(j=0;j<COL;j++){
            // Verifica ahora as colunas alterando i e j
            // que determina o modo de interacao emtre os
            // elementos
            if(m[j][i] == jogador){
                cont++;
            }
        }
        // Se cada linha a contagem for igual a 3
        // O jogador venceu
        if(cont == 3){
            system("clear");
            printf("\t\tJogador %c VENCEU!!\n", jogador);
            system("sleep 2");
            return 1;
        }
    }
    return 0;
}
int verificarDiagonais(char m[][COL], char jogador){
    int i,j;
    int cont=0;

    // Verifica usando a diagonal principal
    for(i=0;i<LIN;i++){
        // Para isso, utiliza linha=i e coluna=i
        if(m[i][i] == jogador){
            cont++;
        }
    }
    // Se cada linha a contagem for igual a 3
    // O jogador venceu pela diagonal principal
    if(cont == 3){
        system("clear");
        printf("\t\tJogador %c VENCEU!!\n", jogador);
        system("sleep 2");
        return 1;
    }else{
        // Se nao conseguiu detectar nenhum jogo pela
        // diagonal principal, agora o programa passa
        // a verificar a diagonal secundaria.
        // Para isso, utiliza linha=i e coluna=(2-i)
        cont = 0;
        for(i=0;i<LIN;i++){
            if(m[i][2-i] == jogador){
                cont++;
            }
        }
        // Se cada linha a contagem for igual a 3
        // O jogador venceu pela diagonal secundaria
        if(cont == 3){
            system("clear");
            printf("\t\tJogador %c VENCEU!!\n", jogador);
            system("sleep 2");
            return 1;
        }
    }
    return 0;
}
void realizarJogada(char m[][COL], char jogador, int *vez){
    int x,y;
    system("clear");
    printf("####### Jogador %c #######\n",jogador);
    printf("Informe o valor de X: ");
    scanf("%i", &x);
    printf("Informe o valor de Y: ");
    scanf("%i", &y);

    // Verifica se o local nos valores X e Y
    // esta disponivel para jogada.
    if(m[x][y] == ' '){
        // Altera o valor de m[x][y] para o
        // valor do jogador em questao
        m[x][y] = jogador;
        // Incrementa vez o valor de "vez" passado por
        // referencia, para encaminhar a jogada para o
        // outro jogador.
        *vez = *vez + 1;
        // Verifica linhas, colunas e diagonais
        // A funcao retorna verdadeiro se o jogador
        // ganhou em alguma das 3 condicoes
        // Em seguida inicializa os valores da matriz e,
        // retorna para o valor de vez = 1, valor inicial
        // para o  inicio das jogadas, que sao iniciadas
        // pelo jogador "X"
        if(verificarLinhas(m, jogador)){
            inicializar(m);
            *vez = 1;
        }else if(verificarColunas(m, jogador)){
            inicializar(m);
            *vez = 1;
        }else if(verificarDiagonais(m, jogador)){
            inicializar(m);
            *vez = 1;
        }
    }else{
        system("clear");
        printf("Nao eh possivel realizar a jogada!\n");
        system("pause");
    }
}
int main(){
    // Declaracao das variaveis
    char jogoVelha[LIN][COL];
    int opc, vez=1;
    // Chama a funcao para inicializar a matriz do jogo da velha
    inicializar(jogoVelha);

    do{
        system("clear");
        // Imprime o esta atual do jogo da velha e
        // em seguida, mostra o menu novamente
        imprimirJogo(jogoVelha);
        opc = menu();
        switch(opc){
            case 1:
                // Realiza a funcao MOD para alterar entre os 2 jogadores;
                if((vez%2) == 0){
                    realizarJogada(jogoVelha, '0', &vez);
                }else{
                    realizarJogada(jogoVelha, 'X', &vez);
                }
                break;
            case 2:
                break;
            default:
                printf("\tOpcao Invalida!\n");
        }
    }while(opc != 2); // interrompe o loop caso o usuario escolha a opcao 2
}
