#include<stdio.h>
int main()
{
	int nosum,i=1, term, sum=0;
	scanf("%d",&nosum);
	while(i<=nosum){
	//	printf("Ingresa el numero %d\n",i);
	printf("\n");
		scanf("%d",&term);
		sum=sum+term;
		i++;
	}
	printf("", sum);
	printf("\nResultado: %d", sum);
return 0;
}