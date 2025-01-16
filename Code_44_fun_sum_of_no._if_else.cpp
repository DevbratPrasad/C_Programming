//sum of n natural no.
#include<stdio.h>
int sum(int);
int main()
{
	int i,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	i=sum(n);
	printf("sum=%d \n",i);
	return 0;
}
int sum(int x)
{
	if(x!=0)
	{
		return x+sum(x-1);
	}
	else
	{
		return x;
	}
}
