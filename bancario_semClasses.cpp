#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float saldo, retirar, dep;
	char opt;
	
	printf("Digite o saldo atual: \n");
	scanf("%f", &saldo);
	
	printf("Seu saldo atual eh : %.2f", saldo);
	

	printf("\nDigite a quantidade que quer retirar:");
	scanf("%f", &retirar);
	
	saldo -= retirar;
	printf("\nSeu saldo atual eh de %.2f", saldo);
	
	printf("\nDigite a quantidade que quer depositar: ");
	scanf("%f", &dep);
	saldo += dep;
	printf("\nSeu saldo atual eh de %.2f", saldo);
	
	

	

}
