#include <iostream>
#define MAX 10
using namespace std;

class Carro {
	public:
		char nome[100];
		char cor[20];
		char placa[20];
		double preco;
};

int main(){
	Carro carros[MAX];
	int i = 0;
	char res;
	while(true){
		cout << "Digite o nome do carro:" << endl;
		cin >> carros[i].nome;
		
		cout << "Digite o preco do carro: " << endl;
		cin >> carros[i].preco;
		
		cout << "Voce deseja continuar? (S/N) " << endl;
		cin >> res;
		
		if (res == 's'){
			i++;
		}else{
			break;
		}
		
		
}
	
	for(int j = 0; j <= i; j++){
		cout << "Nome do carro: " << carros[j].nome << endl;
		cout << "Preco: " << carros[j].preco << " reais \n" << endl;
	}
	return 0;
}
