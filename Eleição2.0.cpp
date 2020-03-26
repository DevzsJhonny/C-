#include <iostream>

using namespace std;

int main() {
	
	int idade;
	
	cout << "Digite a sua idade: " << endl;
	cin >> idade;
	
	switch(idade);
		case (16):
			cout << "Voto nao obrigatorio";
			break;
		case "17":
			cout << "Voto nao obrigatorio";
			break;
		case "18":
			cout << "Voto obrigatorio";
			break;
		case "60":
			cout << "Voto opcional";
			break;
		default:
			cout << "Voto opcional";
			break;
}
