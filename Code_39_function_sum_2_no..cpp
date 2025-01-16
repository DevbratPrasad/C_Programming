#include<stdio.h>
int sum(int,int);
int main()
{
int a,b,c;
printf("Enter value of a,b:");
scanf("%d %d",&a,&b);
c=sum(a,b);
printf("sum of a,b=%d \n",c);
return 0;
}
int x,y,z;
int sum(int x,int y)
{
	int z;
	z=x+y;
	printf("sum=%d \n",z);
	return z;
}
