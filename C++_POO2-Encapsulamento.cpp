#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class Carro { // para facilitar
	private:
		string marca;
		int ano;
	public:
		void setMarca(string x)	 {
			marca = x;
			
}
		string getMarca() {
			return marca;
	}
			void setAno( int y) {
				if ( y > 1990) {
					ano = y;
				} else {
					ano = 1990;
				}
			}
		int getAno(){
			return ano;
		}
		};
		


int main() {
	//string marca = "fiat";
	//int ano = 2019;
	//string cor = "bege";
	//string marca2 = "BMW";
	//string cor2 = "preto"; e assim por diante...
	
	Carro c1;
	c1.setMarca("Fiat");
	//c1.ano = 2019;
	c1.setAno(2018);
	
	
	Carro c2;
	c2.setMarca("BMW");
	//c2.ano = 2018;
	c2.setAno(1700);  
	
	cout << c1.getMarca() << c1.getAno() << endl; //endl pula linha
	
	cout << c2.getMarca() << c2.getAno() <<endl; // cout é saída
	
}
