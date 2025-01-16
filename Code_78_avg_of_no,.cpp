#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, *ptr, sum=0;
	float avg;
	printf("Enter value of n: ");
	scanf("%d", &n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("Enter elements: ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\n");
    for(i=0;i<=n-1;i++)
    {
	sum=sum+*(ptr+i);
    }
    avg=(float) sum/n;
    printf("avg=%f",avg);
    return 0;
}
