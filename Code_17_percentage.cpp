#include<stdio.h>
int main()
{
	float M;
	printf("Enter percentage of student:");
	scanf("%f",&M);
	if(M>=90)
	{
		printf("A Grade");
	}
	else if(M>=75)
	{
		printf("B Grade");
	}
	else if(M>=60)
	{
		printf("C Grade");
	}
	else if(M>=50)
	{
		printf("Fail");
	}
	return 0;
}
