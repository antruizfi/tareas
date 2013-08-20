#include<stdio.h>
void rotarDerecha(int A[9]);

int main(){
	int i ,opc;
	int A[9];
	printf("Ingrese 10 numeros en su arreglo: ");
	for(i=0;i<=9;i++)
		scanf("%d",&A[i]);
	
	do{
		printf("Desea rotar a la derecha?\n1.- SI\n2.- Salir\n");
		scanf("%d",&opc);
		rotarDerecha(A);
	}while(opc==1);
	return 0;
}
void rotarDerecha(int A[9]){
	int aux, i, B[9];
	aux=A[9];
	for(i=0;i<=8;i++){
		B[i+1]=A[i];
	}
	B[0]=aux;
	for(i=0;i<=9;i++){
		A[i]=B[i];
		printf("%d ",A[i]);
	}
}