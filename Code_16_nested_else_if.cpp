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
		printf("%d is a greater number",a);
	}
	else if(a<b)
	{
		printf("%d is a greater number",b);
	}
	else
	{
		printf("%d is equal to %d", a,b);
	}
	return 0;
}
