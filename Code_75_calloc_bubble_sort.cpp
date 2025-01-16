//write a programme to perform bubble sort using DMA using function.
#include<stdio.h>
#include<stdlib.h>
int bubble_sort(int x, int *ptr);
int main()
{
	int n, i, *arr;
	printf("Enter size of array: ");
	scanf("%d", &n);
	arr = (int*)calloc(n, sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed!");
		return 1;
	}
	printf("Enter elements of array: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", (arr + i));
	}
	bubble_sort(n,arr);
	
	printf("After Sorting: ");
	for (i = 0; i < n; i++)
	{
		printf("%d", *(arr + i));
	}
	free(arr);
	return 0;
}
int bubble_sort(int x, int *ptr)
{
	int i, j, t;
	for(i=0; i < x-1; i++)
	{
		for(j = 0; j < x-1-i; j++)
		{
			if(*(ptr + j) > *(ptr + j + 1))
			{
				t = *(ptr + j);
				*(ptr + j) = *(ptr + j + 1);
				*(ptr + j + 1) = 1;
			}
		}
	}
}
