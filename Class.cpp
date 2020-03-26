#include <iostream>
#include <string.h>

using namespace std;
// CLASSES E SEUS OBJETOS
class Pessoa{ // struct é diferente de Class

public:
	char nome[100];//atributos
	char cpf[20];
	int idade;
};

int getIdade(Pessoa pessoa, char nome[]){
 int tam = sizeof(pessoas)	/sizeof(Pessoas);

for(int i = 0; i< tam; i++)	{
	if(strcmp(nome,pessoas[i]) == 0){
	return pessoas[i].idade;
	}
}


}
int main() {
	Pessoa pessoas[3] =
	{
	
	{"John", "177777", 39},
	{ "Maria", "1900000", 40},
	{"Pedro", "10029000", 26},
	};
						
						
	//Pessoa p1 = {"john", "1212102", 39};
	//Pessoa p1; // p1 é um OBJETO da Classe Pessoa
	
	//strcpy(p1.nome, "John");
	//strcpy(p1.cpf, "12192019212");
	//p1.idade = 38;
	
	cout << "Nome: " << pessoas[0].nome << endl;
	cout << "Nome: " << pessoas[1].nome << endl;
	cout << "Nome: " << pessoas[2].nome << endl;
	
	
	 //cout << p1.nome << "\n" << p1.cpf << '\n' << p1.idade << endl;
	return 0;
}





