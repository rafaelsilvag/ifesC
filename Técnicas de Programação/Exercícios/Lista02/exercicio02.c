#include<stdio.h>
#include<math.h>

int main(){
	int i=0; //inicializando uma variável em sua declaração
	int num;

	for(i=0; i<=5; i++){
		printf("\n\tInforme o %d numero: ", i+1);
		scanf("%i", &num);
		printf("\n\tO cubo de %0.0d eh %.2lf\n", num, pow(num,3));
	}
	printf("\n\n");	
}
