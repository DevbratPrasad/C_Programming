//write a programme to 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *ptr = NULL,i;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	ptr = (int * )malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Error!insufficient Memory");
		exit (0);
	}
	printf("Enter the elements: ");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",ptr + i);
	}
	printf("Elements are: ");
	for(i=0;i<=n-1;i++)
	{
		printf("%d",*(ptr+i));
	}
	free(ptr);
}
