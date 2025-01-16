#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a,b: \n");
	scanf("%d%d",&a,&b);
	a+=b;
	printf("sum of a,b=%d \n",a);
	a-=b;
	printf("subtraction of a,b =%d \n",a);
	a*=b;
	printf("multiplication of a,b=%d \n",a);
	a/=b;
	printf("division of a,b=%d \n",a);
	a%=b;
	printf("modulus of a,b=%d \n",a);
	return 0;
}
