#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",n-i+1);	
		}
		printf("\n");
	}
	return 0;
	
}
