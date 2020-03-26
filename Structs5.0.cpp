#include <iostream>
#include <string.h>
using namespace std;

typedef struct pessoa{ // agrupar dados, não necessitando de diversos arrays
	char nome[100];
	int idade;
	
}t_pessoa;

int main(){
	t_pessoa p;
	strcpy(p.nome, "Jhonny");
	p.idade = 18;
	
	cout << "Nome: " << p.nome << endl;
	cout << "Idade: " << p.idade << " anos"<< endl;
	
		
}
