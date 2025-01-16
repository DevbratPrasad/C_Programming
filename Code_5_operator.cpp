#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	c=a+b;
	printf("addition=%d",c);
	d=a-b;
	printf("subtraction=%d",d);
	e=a*b;
	printf("multiplication=%d",e);
	f=a/b;
	printf("division=%d",f);
	g=a%b;
	printf("modulus=%d",g);
	return 0;
}
