#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i+j-1);
		}
		printf("\n");
	}
	return 0;
}
