#include<stdio.h>

int main(){
//programa que checa el tamaño de los tipos de datos
	int a;
	float b;
	char carac='R';
	
	printf("\n\nEl tamanho del valor entero es: %d",sizeof(a));
	printf("\n\nEl tamanho del valor flotante es: %d",sizeof(b));
	printf("\n\nEl tamanho del valor flotante es: %d",sizeof(carac));
	getchar();
	return 1;
}
