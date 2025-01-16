#include<stdio.h>
int main()
{
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is a positive number",n);
	}
	else if(n<0)
	{
		printf("%d is a negative number",n);
	}
	else
	{
		printf("%d is equal to zero",n);
	}
	return 0;
}
