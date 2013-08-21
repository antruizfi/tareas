#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define R 6 //las macros se resuleven en tiempo de precompilado
#define C 6 //sustituyen los valores

void rellenar(int [][C]); //tipo de retorno y nombre y tipo de parametros
void imprimir(int [][C]);//siempre debe incluirse el NUMERO DE COLUMNAS
void dupmat(int rs,int ri,int cd, int ci, int A[][C], int B[][C] );

void main(){
	int a[R][C]={0};//para inicializar en 0 todo el arreglo
	rellenar(a);//solo se indica el nombre del arreglo
	printf("A:\n");
	imprimir(a);
	system("pause");
	int b[R][C]={0};
	rellenar(b);//solo se indica el nombre del arreglo
	printf("B:\n");
	imprimir(b);
	dupmat(1,4,1,3,a,b);
	puts("");
	imprimir(a);
	puts("");
	imprimir(b);
}

void dupmat(int rs,int ri,int cd, int ci, int A[R][C], int B[R][C] ){
	int i, j;
	for(i=rs; i<=ri;i++){
		for(j=cd;j<=ci;j++){
			A[i][j]=B[i][j];
		}

	}
}

void rellenar(int a[R][C]){ //aqui si se define nombre de los parametros
	int i, j;
	srand(time(NULL)); 
	for(i=0;i<R;i++){
		for(j=0;j<C;j++)//se agrego este ciclo
			a[i][j]=rand() % 10; //serie de numeros pseudoaleatorios genera numeros entre 0 y 9
	}
}
void imprimir(int a[R][C]){ //aqui si se define nombre de los parametros
	int i, j;
	
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			printf("%d\t ",a[i][j]); //imprime arreglo
			
		}
		puts("");
	}
}
