#include<stdio.h>
int main()
{
	int i,n,m,d,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	printf("sum of digits of %d = %d",m,sum);
	return 0;
}
