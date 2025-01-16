#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b;
	printf("Enter value of a,b:");
	scanf("%d%d",&a,&b);
	printf("Values of a,b before swapping=%d%d \n",a,b);
	swap(a,b);
	printf("Values of a,b,after swapping=%d%d \n",a,b);
	return 0;
}
	int swap(int x,int y)
	{
		int z;
		printf("Value before swap=%d%d \n",x,y);
		z=x;
		x=y;
		y=z;
		printf("Values after swap=%d%d \n",x,y);
	}

