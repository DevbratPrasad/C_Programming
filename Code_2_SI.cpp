#include<stdio.h>
int main()
{
	float P,R,T, SI;
	printf("enter value of P");
	scanf("%f",&P);
	printf("enter value of R");
	scanf("%f",&R);
	printf("enter value of T");
	scanf("%f",&T);
	SI=(P*T*R)/100;
	printf("Simple interest=%f",SI);
	return 0;
}
