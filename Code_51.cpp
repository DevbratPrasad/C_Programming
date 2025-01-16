#include<stdio.h>
int main()
{
	int n,i,j,a[50],m,row,column;
	printf("enter the size of column: ");
	scanf("%d",&m);
	printf("enter elements of 2-d array: ");
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
			printf("%-3d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
