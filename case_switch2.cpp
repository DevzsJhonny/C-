#include <iostream>
#include <conio.h> // getch() getche()
#include <math.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, mg, f;
	char tecla;
	tecla = 'O';
	
	MENU:
		system("cls");
		cout << "\nMenu\n1 Ler, calcular e exibir\n2 Sair\n Item";
		tecla = getche();
		switch(tecla){
			case '1':
				cout << "\nDigite n1:" << endl;
				cin >> n1;
				cout << "\nDigite n2:" << endl;
				cin >> n2;
				cout << "\nDigite as faltas:" << endl;
				cin >> f;
				
				mg = sqrt(n1 * n2);
				
				if(mg < 6 || f > 20){
					cout <<"\nReprovado!\n Média = " << mg;
					cout << "\nFaltas" << f << endl;
					
				}else{
					cout << "\nAprovado!\nMédia: " << mg;
					cout << "\nFaltas: " << f << endl;
				}
				break;
			case '2':
				cout << "\nPrograma finalizado!\n";
				exit(0);
				break;
		}
		system("pause");
		goto MENU;
		return 0;
		
}
