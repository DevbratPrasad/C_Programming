#include<stdio.h>
int fib(int);
int main() 
{
	int a,i;
	printf("Enter a:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	    printf("%d",fib(i));
	}
	  return 0;
}
	int fib(int x)
	{
	    if(x==1)
	    {
	    return 0;
	    }	
	    else if(x==2)
	    {        
		return 1;
	    }
	    else
	    {
	    return fib(x-1)+fib(x-2);
	    }
   }
