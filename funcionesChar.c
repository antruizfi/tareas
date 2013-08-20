#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//int digit(int var);
int main(){
	char var, var2, var3, var4, var5,var6;
	char cad[25],cad2[25], cad3[10],cad4[10], cad5[10], nombre[15], cad6[20],cad7[20];
	char concat1[15], concat2[15],concat3[15],concat4[15],c1[15],c2[15],c3[15],c4[15];;
	int i, carac,ncat,n,c,ncomp;
	printf("Probando algunas funciones en C\n\n");
	printf("isdigit : \n");
	printf("introduce el valor a evaluar\n");
	scanf("%c",&var);
	if( isdigit(var) )
		printf("\nEl caracter introducido %c SI  es un digito\n", var);
	else
		printf("\nEl caracter introducido %c NO  es un digito\n", var);
	   
	   
	fflush(stdin);
	printf("\n\nisalpha: \n");
	printf("Introduce el valor a evaluar\n");
	scanf("%c",&var2);
	if(isalpha(var2))
	  printf("\nEl caracter introducido %c SI  es una letra\n", var2 );
	else
	  printf("\nEl caracter introducido %c NO  es un letra\n", var2 );
	
	   
	   
	fflush(stdin);
	printf("\n\nisalnum: \n");
	printf("Introduce el valor a evaluar\n");
	scanf("%c",&var3);
	if(isalnum(var3))
	  printf("\nEl caracter %c es alfanumerico\n", var3 );
	else
	  printf("\nEl caracter %c NO es  alfanumerico", var3 );
	

	fflush(stdin);
	printf("\n\nislower: \n");
	printf("Introduce el valor a evaluar\n");
	scanf("%c",&var4);
	if(islower(var4))
	  printf("\nEl caracter %c es minuscula\n",var4);
	else
	  printf("\nEl caracter %c NO es  minuscula",var4);
	

	fflush(stdin);
	printf("\n\nislower: \n");
	printf("Introduce el valor a evaluar\n");
	scanf("%c",&var5);
	if(isupper(var5))
		printf("\nEl caracter %c es mayuscula\n", var5 );
	else
		printf("\nEl caracter %c NO es  mayuscula", var5 );
	    
		
	fflush(stdin);
	printf("\n\ntolower: \n");
	printf("Introduce el valor a evaluar\n");
	gets(cad);
	for(i = 0; cad[i]; i++) 
		cad[i] = tolower(cad[i]);
	puts(cad);
		
	
	fflush(stdin);
	printf("\n\ntoupper: \n");
	printf("Introduce el valor a evaluar\n");
	gets(cad2);
	for(i = 0; cad2[i]; i++) 
		cad2[i] = toupper(cad2[i]);
	puts(cad2);

	fflush(stdin);
	printf("\n\natoi: \n");
	printf("Introduce el valor a evaluar\n");
	gets(cad3);
	printf( "Convierte la cadena %s en un numero entero: %d\n", cad3, atoi(cad3) );
	  
	fflush(stdin);
	printf("\n\natol: \n");
	printf("Introduce el valor a evaluar\n");
	gets(cad4);
	printf( "Convirtiendo la cadena %s en un numero long: %u\n", cad4, atol(cad4) );
	
	 fflush(stdin);
	printf("\n\natof: \n");
	printf("Introduce el valor a evaluar\n");
	gets(cad5);
	 printf( "Convirtiendo la cadena \"%s\" en un numero flotante: %f\n", cad5, atof(cad5));
	 
		 
	fflush(stdin);
	printf("\nstrcpy: \n");
	printf("Introduce el valor a copiar\n");
	gets(cad5);
	strcpy(nombre, cad5);
	printf("copiado en otra variable: %s",nombre);
	 
	fflush(stdin);
	printf("\nstrncpy: \n");
	printf("Introduce una cadena\n");
	gets(cad6);
	printf("Introduce una cadena mAs corta que la primera para copiarla en Esta\n");
	gets(cad7);
	printf("Introduce cuantos caracteres quieres copiar\n");
	scanf("%d",&carac);
	strncpy(cad6, cad7, carac); 
	printf("La cadena ahora es: %s",cad6);
			
			
	fflush(stdin);
	printf("\nstrcat: \n");
	printf("Introduce una cadena\n");
	gets(concat1);
	printf("Introduce otra cadena\n");
	gets(concat2);
	printf( "Se concatenan con strcat quedando: %s", strcat(concat1,concat2));
	
	
	fflush(stdin);
	printf("\nstrncat: \n");
	printf("Introduce una cadena\n");
	gets(concat3);
	printf("Introduce otra cadena\n");
	gets(concat4);
	printf("Introduce cuantos caracteres  de la segunda cadena quieres copiar en la primera\n");
	scanf("%d",&ncat);
	printf("Se concatenan con los primeros %d caracteres quedando: %s",ncat, strncat(concat3,concat4,ncat));
	
	
	fflush(stdin);
	printf("\nstrcmp: \n");
	printf("Introduce una cadena\n");
	gets(c1);
	printf("Introduce otra cadena\n");
	gets(c2);
	 n = strcmp(c1,c2);
	if(n==0)
		printf("Las dos cadenas \"%s\" y \"%s\" son iguales.\n", c1, c2);
	 else{
	  if(n>0){
	   printf("La cadena \"%s\" es mayor que \"%s\".\n",c1,c2);
	  }
	  else{
	   printf("La cadena \"%s\" es menor que \"%s\".\n",c1,c2);
	  }
	 }
				
	fflush(stdin);
	printf("\nstrncmp: \n");
	printf("Introduce una cadena\n");
	gets(c3);
	printf("Introduce otra cadena\n");
	gets(c4);
	printf("Introduce cuantos caracteres  de la segunda cadena quieres comparar en la primera\n");
	scanf("%d",&ncomp);
	c = strncmp( c3, c4, ncomp);
	printf( "Las %d primeras letras de s1 son ",ncomp);
	if( c < 0 )  
		printf( "menores que" );
	else if( c > 0 )  
		printf( "mayores que" );
	else  
		printf( "iguales a" );
	printf( " c2\n" );
return 0;
  
}