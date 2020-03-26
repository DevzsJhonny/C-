#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int tecla;
	float a,b,c;
	string tipo;
	
	MENU:
		
	cout << "Digite 1 para ler e exibir, 2 para sair:" << endl;
	
	tecla = getch();

	switch(tecla){
		case '1':
			cout << "\nDigite um valor para um lado de um triangulo: " << endl;
			cin >> a;
			cout << "Digite um valor para um lado de um triangulo: "<< endl;
			cin >> b; 
			cout << "Digite um valor para um lado de um triangulo: " << endl;
			cin >> c;
		if(a==b && a==c){
			cout << "Triangulo Equilatero!" << endl;
		}else if( a!=b && a!=c) {
			cout << "Triangulo Escaleno!" << endl;
		}else{
			cout << "Triangulo Isosceles!" << endl;
		}
		break;
		case '2':
			cout << "Programa Finalizado!";
			exit(0);
			break;
	}
	goto MENU;
	system("pause");
	return 0;
}

