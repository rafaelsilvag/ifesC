#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf;
    float valor;
    // Abri o arquivo
    pf = fopen("arquivo.bin", "rb");
    // Ler o conteudo do arquivo
    while(!feof(pf)){
        if(fread(&valor, sizeof(float), 1, pf) != 1){
            printf("Erro ao ler valor do arquivo!\n");
        }
        printf("Valor: %.2f\n", valor);
    }
    fclose(pf);
}
