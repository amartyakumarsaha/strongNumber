#include<stdio.h>
int factorial();
int strongNumber();

int main()
{
	int n,sum;
	scanf("%d",&n);
	sum=strongNumber(n);
	if(sum==n)
	{
		printf("%d is a Strong Number",n);
	}
}
int strongNumber(int n)
{
	int i,sum=0,ld,fact;
	int num=n;
	while(n>0)
	{
		i=1;
		ld=n%10;
		fact=factorial(i,ld);
		sum=sum+fact;
		n=n/10;
	}
	
	return sum;
}
int factorial(int i,int ld)
{
	int fact=1;
	for(i=1;i<=ld;i++)
	{
		fact=fact*i;
	}
	return fact;
}
