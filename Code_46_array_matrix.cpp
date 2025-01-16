#include<stdio.h>
int main()
{
	int i,n,a[50],max,min,t,s;
	printf("enter the size of matrix:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for (i = 1; i < n; i++)
	{
		if(a[i]>max);
		{
			max=a[i];
			t=i;
		}
	    if(a[i]<min)
	    {
	       	min=a[i];
		    s=i;
	    }
    }
    printf("maximum no=%d at position=%d\n",max,t+1);
    printf("minimum no=%d at position=%d\n",min,s+1);
    
    return 0;
}
