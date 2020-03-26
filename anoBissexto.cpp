#include <iostream>

using namespace std;

int main(){
	
	int ano;
	menu:
		cout << "Digite um ano:" << endl;
		cin >> ano;
		if(ano % 4 == 0) {
			cout << "\nAno Bissexto" << endl;
		}else {
			cout << "\nAno nao bissexto" << endl;
		}
		goto menu;
}
