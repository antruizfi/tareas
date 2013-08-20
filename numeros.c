#include<stdio.h>
void centenas(int cent);
void decenas(int dec);
void unidades(int uni);
int main(){
	int num, aux,cent,dec,unid;
	printf("Ingresa tu Numero: \n");
	scanf("%d",&num);
	unid=num%10;
	
	aux=num-unid;
	aux=aux%100;
	dec=aux/10;
	
	aux=num-dec*10-unid;
	cent=aux/100;
	

	if(cent>=1&&dec>=1&&unid>=1){
		centenas(cent);
		decenas(dec);
		printf("y");
		unidades(unid);		
	}
	else if(cent>=1&&dec>=1&&unid==0){
		centenas(cent);
		decenas(dec);
	}
	else if(cent>=1&&dec==0&&unid>=1){
		centenas(cent);	
		unidades(unid);
	}
	else if(cent==0&&dec==2&&unid==0){
		printf("veinte");
	}
	else if(cent==0&&dec>=1&&unid>=1){
		decenas(dec);	
		unidades(unid);
	}
	else if(cent>=1&&dec==0&&unid==0)
		centenas(cent);
	else if(cent==0&&dec>=1&&unid==0)
		decenas(dec);
	else if(cent==0&&dec>=0&&unid>=1)
		unidades(unid);
	else if(cent==0&&dec==0&&unid==0)
		printf("Cero");
	
	
return 0;
}

void centenas(int cent){
	if(cent==1)
		printf("Cien");
	else if(cent==2)
		printf("Doscientos");
	else if(cent==3)
		printf("Trescientos");
	else if(cent==4)
		printf("Cuatrocientos");
	else if(cent==5)
		printf("Quinientos");
	else if(cent==6)
		printf("Seiscientos");
	else if(cent==7)
		printf("Setecientos");
	else if(cent==8)
		printf("Ochocientos");
	else if(cent==9)
		printf("Novecientos");
}
void decenas(int dec){
	if(dec==1)
		printf("diez");
	else if(dec==2)
		printf("veinti");
	else if(dec==3)
		printf("treinta");
	else if(dec==4)
		printf("cuarenta");
	else if(dec==5)
		printf("cincuenta");
	else if(dec==6)
		printf("Sesenta");
	else if(dec==7)
		printf("setenta");
	else if(dec==8)
		printf("Ochenta");
	else if(dec==9)
		printf("Noventa");
}

void unidades(int unid){
	if(unid==1)
		printf("uno");
	else if(unid==2)
		printf("dos");
	else if(unid==3)
		printf("tres");
	else if(unid==4)
		printf("cuatro");
	else if(unid==5)
		printf("cinco");
	else if(unid==6)
		printf("seis");
	else if(unid==7)
		printf("siete");
	else if(unid==8)
		printf("ocho");
	else if(unid==9)
		printf("nueve");
}