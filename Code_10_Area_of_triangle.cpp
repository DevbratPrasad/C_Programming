#include<stdio.h>
int main()
{
	float Base,Height,Area;
	printf("enter value of base \n");
	scanf("%f",&Base);
	printf("enter value of height \n");
	scanf("%f",&Height);
	Area = (Base+Height)/2;
	printf("Area of Triangle=%f",Area);
	return 0;
}
