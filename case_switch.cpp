#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	char tecla;
	tecla = 'A';
	REPETIR:
		system("cls");
		cout << "\nO c�digo do caractere " << tecla << " � " << (int) (tecla) << endl;
		cout << "\nDigite outra tecla qualquer: ";
		tecla = getch(); //lendo 
		
		switch((int)(tecla)){
			case 27:
				cout << "\nVoce digitou ESC \n";
				break;
			case 32:
				cout << "\nVoce digitou ESPA�O\n";
				break;
			case 13: 
				cout << "\nVoce digitou ENTER\n";
				break;
			default:
				cout << " \nVoce digitou " << tecla << " " << endl;
				break;
		}
		system("pause");
		goto REPETIR;
		return 0;
	
	
}
