#include<stdio.h>
int main()
{
	int i,n,m,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	m=n;
	do
	{
		n=n/10;
		count++;
	}
	while(n>0);
	printf("no of digits of %d = %d",m,count);
	return 0;
}
