#include<stdio.h>
int main()
{
	int a[50][50],t[50][50],n,i,j,m;
	printf("Enter rows:");
	scanf("%d",&n);
	printf("Enter column size:");
	scanf("%d",&m);
	printf("Enter value elements of 2-d matrix:");
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
			(t[i][j]=a[j][i]);
		}
	}
	printf("Transverse of matrix: ");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			printf("%d",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}

