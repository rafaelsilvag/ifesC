#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf;
    float valor = 130.22;
    // Abri o arquivo
    pf = fopen("arquivo.bin", "a+b");
    // Gravar a informacao no arquivo

    if(fwrite(&valor,sizeof(float),1,pf) != 1){
        printf("Erro ao gravar no arquivo!\n");
    }
    fclose(pf);
    printf("Valor gravado no arquivo!\n");
}
