#include<stdio.h>
int main()
{
	int a[50][50],t[50][50],n,i,j,m;
	printf("Enter value of rows: ");
	scanf("%d",&n);
	printf("Enter value of column: ");
	scanf("%d",&m);
	{
	for(i=0;i<=n-1;i++)
    
		for(j=0;j<=m-1;j++)
		{
			if(i==j)
			{
				(a[i][j]=0);
			}
			else if(i<j)
			{
				(a[i][j]=1);
			}
			else
			{
				(a[i][j]=2);
			}
		}
    }
	return 0;
}
