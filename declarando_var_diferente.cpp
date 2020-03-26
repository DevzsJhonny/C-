#include <iostream>

using namespace std;

int main(){
	cout << "Digite os valores ( negativo finaliza): ";
	float soma = 0;
	while(true) {
		float valor ;
		cin >> valor;
		if(valor< 0)break;
		soma += valor;
		
	}
	cout << "\nSoma: " << soma << endl;
}
