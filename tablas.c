#include<stdio.h>
int main()
{
	int i=0, num, mult;
	printf("TABLAS DE MULTIPLICAR\n");
	puts("");
	printf("La tabla de que numero deseas saber? \n");
	scanf("%d",&num);
	
	while(i<=10)
	{
		mult=num*i;
		printf("\n\t%d x %d = %d\n", num,i, mult);
		i++;
	}
	return 0;
}