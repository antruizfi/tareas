#include <stdio.h>
void noPrimos(int num,int lim);

int main()
{	
	int num, lim;
	printf("A partir de que nUmero deseas ver cuantos numeros primos hay? \n");
	scanf("%d",&num);
	printf("\nHasta quE nUmero desea conocer los primos?: \n");
	scanf("%d", &lim);
	noPrimos(num, lim);
	return 0;
}

void noPrimos(int num, int lim){
	int primo;
	int cont=0;
	int divide, res;
	for (num;num<=lim;num++)
	{
		for(divide=2;divide<num;divide++)
		{
			primo=1;
			res=num%divide;
			if(res==0)
			{
				primo=0;
				break;
			}
		}
		if(primo !=0) 
		{	
		printf("%d ",num);
		cont=cont+1;
		}
	}
	printf("\n\nEsos son todos los %d numeros primos",cont);
}