#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	string str = "Jhonny Amorim";
	
	cout << str << endl;
	cout << "Tamanho dessa string: " << str.size() << endl;
	cout << str.length() << endl;
	cout << str.at(1) << endl;

	str.append(" Silva");
	cout << str << endl; 
	
	str.erase(9, str.size());
	//str.erase(0, str.size());  apaga tudo
	cout << str << endl;
}
