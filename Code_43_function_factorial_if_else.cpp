#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("Enter value of n");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial=%d",f);
	return 0;
}
int fact(int x)
{
	if(x==0)
	{
	return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}
