#include<stdio.h>
#include<stdlib.h>
void primo(int n);
int main()
{

int n;
fflush(stdin);
printf("Dame el nUmero que quieras saber si es o no nUmero primo: ");
scanf("%d",&n);
primo(n);
getch();
return 0;
}
void primo(int n){
int primo=0, i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0) 
		primo++;
	}
	if(primo==2) 
	{
		printf("NUmero primo");
	}
	else
	{
		printf("NUmero NO primo"); 
	}
}