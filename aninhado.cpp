#include <iostream>

using namespace std;


int main(){
	
	float n1, n2, n3, media;
	
	cout << "Digite as notas da prova do aluno:" << endl;
	cin >> n1 >> n2 >> n3;
	
	media = (n1 + n2 + n3)/3;
	cout << "A media do aluno e " << media << endl;
	
	if(media < 3){
		cout << "Reprovado!!";
	}else if(media >=4 && media <6){
		cout << "Recuperacao";
	}else {
		cout << "Aprovado!!";
	}
	//isso é uma condição aninhada, ou seja, com diversos blocos
	
}
