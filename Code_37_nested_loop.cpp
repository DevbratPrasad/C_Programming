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
				printf("%c",'A'+j-1);
				scanf("%c",&j);
			if((i+j)%2==0)
			{
				printf("A");
			}
			else
			{
				printf("B");
			}
			printf("\n");
		}
		}
		return 0;
	
}
