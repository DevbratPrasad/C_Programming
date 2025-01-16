//****************
#include<stdio.h>
#include<math.h>
int armstrong(int);
int main() //power = int pow()
{
    int	a,w;
    printf("Enter number a");
    scanf("%d",&a);
    w=armstrong(a);
    if(a==w)
    {
    	printf("Armstorng number");
	}
	else
	{
		printf("Not an Armstrong number");
	}
	return 0;
}
int armstrong(int n)
{
	int m,count=0,sum=0,d;
	m=n;
	do
	{
		n=n/10;
		count=count+1;
	}
	while(n>0);
	while(m>0)
	{
		d=m%10;
		m=m/10;
		sum=sum+pow(d,count);
	}
	return sum;
	
}
