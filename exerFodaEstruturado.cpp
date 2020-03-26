#include <iostream>

using namespace std;
double const pi = 3.14;
double comp(){
	float comp;
	cout << "Digite o comprimento: " << endl;
	cin >> comp;
	return comp;
}
double calcRaio(double r, double c){
	float raio;
	raio = c/(2 * pi);
	return raio;
}
double calcDiam(double d){
	float diam;
	diam = d/pi;
	return diam;
}
double calcArea(double a, double r){
	double area;
	area = 2 * pi * r;
	
}

int  main(){
	float R,C,D, A;
	int tecla;
	cout << "Digite 1 para executar ; 2 sair" << endl;
	cin >> tecla;
	switch(tecla){
		case 1:
			C = comp();
			R = calcRaio(C,R);
			D = calcDiam(D);
			A = calcArea(R, A);
			cout << "O raio e " << R << endl;
			cout << "O comprimento e " << C << endl;
			cout << "O diametro e " << D << endl;
			cout << "A area e " << A << endl;
			break;
		case 2:
			exit(0);
			system("pause");
			
	}
}

