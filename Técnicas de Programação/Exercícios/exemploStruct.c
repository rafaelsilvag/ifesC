#include <stdio.h>

int func(int x);

struct endereco {
	char rua[50];
	char cidade[50];
	char estado[2];
	long int cep;
};

struct curso {
	int id;
	char nome[30];
	char ementa[50];
};

struct ficha {
	char nome[30];
	struct endereco end;
	struct curso cur;
};

int main(){
	struct ficha fichas[30];

	fichas[0].end.cep = 123456;
}

int func(int x){
	return 1;
}
