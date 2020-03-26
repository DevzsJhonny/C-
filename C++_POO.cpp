#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class Carro { // para facilitar
	public:
		string marca;
		int ano;
	//private:
		string cor;
};
int main() {
	//string marca = "fiat";
	//int ano = 2019;
	//string cor = "bege";
	//string marca2 = "BMW";
	//string cor2 = "preto"; e assim por diante...
	
	Carro c1;
	c1.marca = "Fiat";
	c1.ano = 2019;
	c1.cor = "Azul";
	
	Carro c2;
	c2.marca = "BMW";
	c2.ano = 2018;
	//c2.cor = "Branco";  nao pode por estar em private
	
	cout << c1.marca << endl; //endl pula linha
	cout << c2.marca << endl;
}
