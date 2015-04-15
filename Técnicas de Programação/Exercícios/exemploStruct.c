#include <stdio.h>

struct endereco {
	char rua[50];
	char cidade[50];
	char estado[2];
	long int cep;
};

struct ficha {
	char nome[30];
	struct endereco end;
};

int main(){
	struct ficha fichas[30];

	fichas[0].end.cep = 123456;
}
