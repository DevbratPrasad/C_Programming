#include<stdio.h>
int main()
{
	int a[50],i,pos=0,n,key=0,low,mid,high;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elements want to search: ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			pos=mid+1;
			break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else
		{
			
		}
		
	}
}
