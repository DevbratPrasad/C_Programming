#include<stdio.h>
int main()
{
	int a[50][50],t[50][50],n,m,i,j,sum=0;
	printf("Enter rows");
	scanf("%d",&n);
	printf("Enter column size");
	scanf("%d",&m);
	printf("Enter elements of 2-d matrix");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
			{
				if(i==j)
				{
					(sum=sum+a[i][j]);
				}
			}
			printf("Sum of diagonal elements of 2-d matrix=%d",sum);
			return 0;
		}
}

