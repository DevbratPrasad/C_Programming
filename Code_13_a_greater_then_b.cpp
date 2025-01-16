#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	if(a>b)
	{
		printf("number=%d is true",a,b);
	}
	else
	{
		printf("number=%d is false",a,b);
	}
	return 0;
}
