//**********************
#include<stdio.h>
int fact(int a);
int main()
{
	int a,c;
	printf("Enter value of a:");
	scanf("%d",&a);
	c=fact(a);
	printf("factorial of a:%d",c);
	return 0;
}
    int fact (int x)
    {
    	int i,f=1;
    	for(i=1;1<=x;i++)
	{
		f=f*i;
	}
	return f;
}
