#include<stdio.h>
#include<stdlib.h>

int mayor(int A[], int inf, int sup);
int main(){
	int i, A[9], inf, sup;
	
	printf("\n\nInroduce nUmeros enteros en el arreglo: \n");
	for(i=0;i<9;i++){
		scanf("%d",&A[i]);
		fflush(stdin);
	}
	printf("\nIndica el rango inferior y superior separados por un espacio:\n");
	scanf("%d %d", &inf, &sup);
	printf("\n\nEl nUmero mayor en el rango seleccionado es: %d", mayor(A, inf, sup));
	
	return 0;
}
int mayor(int A[9], int inf, int sup){
	int cmp=0,i;
	for(i=inf;i<=sup;i++){
		if(cmp<=A[i]){
			cmp=A[i];
			i++;
		}else
			i++;
	}
	return cmp;
}