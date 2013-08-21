#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int i=0, op, cont=0;
	char cadena[20],cadena2[20];
	printf("Ingresa tu cadena\n");
	gets(cadena);
	puts("");
	while(cadena[i]!='\0'){
		i++;
		cont++;
	}
	
	

	if(cadena[0]!=cadena[cont-1]){
		printf("La cadena NO es palindromo");
	}
	else{
		for(i=0;i<cont;i++){
			if(cadena[i]==cadena[(cont-i)-1])
				op=0;
			else
				op=1;
		}
		if(op==0)
			printf("La cadena es un palindromo");
		else
			printf("La cadena NO es palindromo");
		}
		
	return 0;
}

