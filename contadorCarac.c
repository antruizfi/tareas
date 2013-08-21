#include<stdio.h>
int main(){
	char cadena[20];
	int cont=0, i=0;
	printf("\tMediremos el tamanho de tu cadena.\n");
	printf("\tIngresa tu cadena: \n");
	gets(cadena);
	while(cadena[i]!='\0'){
		i++;
		cont++;
	}
	printf("El tamanho es %d",cont);
	
return 0;
}