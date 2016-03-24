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
            if(m[i][j] == jogador){
                cont++;
            }
        }
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
            if(m[j][i] == jogador){
                cont++;
            }
        }
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

    // Diagonal Principal
    for(i=0;i<LIN;i++){
        if(m[i][i] == jogador){
            cont++;
        }
    }
    if(cont == 3){
        system("clear");
        printf("\t\tJogador %c VENCEU!!\n", jogador);
        system("sleep 2");
        return 1;
    }else{
        cont = 0;
        for(i=0;i<LIN;i++){
            if(m[i][2-i] == jogador){
                cont++;
            }
        }
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

    if(m[x][y] == ' '){
        m[x][y] = jogador;
        *vez = *vez + 1;
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
    char jogoVelha[LIN][COL];
    int opc, vez=1;
    inicializar(jogoVelha);

    do{
        system("clear");
        imprimirJogo(jogoVelha);
        opc = menu();
        switch(opc){
            case 1:
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
    }while(opc != 2);
}
