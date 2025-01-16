#include<stdio.h>
int main()
{
	int a[50],i,j,n,t;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter value of the array");
	for(i=0;i<=n-1;n++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}	
	}
	for(i=0;i<=n-1;i++)
	{
		printf("Shorted elements are:%-3d",a[i]);
	}
    return 0;
}
