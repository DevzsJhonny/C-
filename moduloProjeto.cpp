// Módulo que contém funções math

int fatorial(int n) {
	int fat = 1;
	for(int i = 1; i <n; i ++) {
		fat = fat * ( i + 1);
		return fat;
	}
}

int area_quad(int lado) {
	return lado * lado;
}

int area_retan( int lado, int base) {
	return base * lado;
}
