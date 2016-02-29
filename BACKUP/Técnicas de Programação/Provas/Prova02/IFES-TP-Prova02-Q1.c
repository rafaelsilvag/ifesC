#include <stdio.h>
#include <string.h>

int minha_strcmp(char str1[], char str2[]){ //2,0 Pontos
	int i;

	for(i=0; str1[i] != '\0'; i++){ //1,0 Ponto
		if (str1[i] != str2[i]){ //1,0 Ponto
			if(strlen(str1) < strlen(str2)){ //1,0 Ponto
				return -1; //1,0 Ponto
			}else if(strlen(str1) > strlen(str2)){
				return 1; // 1,0 Ponto
			}
		}
	}
	return 0; //1,0 Ponto
}

int main(){
	char str1[100];
	char str2[100];

	printf("Digite a String 1: ");
	gets(str1);
	printf("Digite a String 2: ");
	gets(str2);

	printf("As Strings %s e %s sao iguais: %d\n\n", str1, str2, minha_strcmp(str1, str2));

}
