#include<stdio.h>
int main()
{
	int n,i,max,min,a[50],b[50];
	printf("Enter the size of matrix: ");
	scanf("%d",&n);
	printf("Enter the elements of array A: \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements of array B: \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for (i=0;i<n;i++)
	{
		int sum[i];
		sum[i]=a[i]+b[i];
	}
	printf("Elements of sum of array: \n");
	return 0;
}
