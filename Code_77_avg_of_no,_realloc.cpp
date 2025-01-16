#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	float *arr, sum 0.0, avg;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	arr = (float*) malloc(n * sizeof(float));
	if (arr == NULL)
	{
		printf("Memory allocation failed!");
		return 1;
	}
	printf("Enter the elements: \n");
	for(int i=0;i<n;i++)
	{
		int sum;
		scanf("%f", &arr[i]);
		sum+=arr[i];
	}
	int avg,sum,a;
	avg = sum/n;
	printf("The avg of the elements is: %.2f\n",avg);
	free(a);
	return 0;
}
