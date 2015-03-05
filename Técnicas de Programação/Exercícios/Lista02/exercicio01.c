#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int num, maiorValor, segmaiorValor;
    for(i=0;i<5;i++){
        printf("Informe um valor: ");
	scanf("%i",&num);
        if(i==0){
 	    maiorValor = num;
	}else if(num > maiorValor){
            segmaiorValor = maiorValor;
            maiorValor = num;
        }else if(num > segmaiorValor){
            segmaiorValor = num;
	} 
    }
    printf("O maior valor eh: %i\n", maiorValor); 
    printf("O segundo maior valor eh: %f\n", segmaiorValor);
}
