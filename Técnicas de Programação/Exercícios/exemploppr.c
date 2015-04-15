#include <stdio.h>
void lerDados(int num1, int num2, int *res){
	*res = num1 * num2;
}
int main(){
	int n1, n2, res;

	printf("Informe o 1o valor: ");
	scanf("%i", &n1);
	printf("Informe o 2o valor: ");
	scanf("%i", &n2);

	lerDados(n1, n2, &res);
	printf("Valor de RES: %i\n", res);
}