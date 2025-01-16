#include<stdio.h>
int main()
{
	int i,n,c;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=i*i;
		printf("%d,",c);
	}
	return 0;
}
