#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, cont;
	char cadena1[20], cadena2[20];
	printf("Programa que copia cadenas\n\n");
	printf("Introduzca una cadena:\n");
	gets(cadena1);
	//printf("%s",cadena1);
	//system ("pause");
	while(cadena1[i]!='\0'){
		i++;
		cont++;
	}
	
	for(i=0;i<=cont+1;i++)
		cadena2[i]=cadena1[i];
	
	printf("La cadena copiada es: %s",cadena2);
	
return 0;
}