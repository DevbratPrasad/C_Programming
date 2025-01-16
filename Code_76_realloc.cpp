#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr, *ptr1, n, i;
	printf("Enter value of n: ");
	scanf("%d", &n);
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	printf("Enter values:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", ptr + i);
	}
	printf("Enter updated n: ");
	scanf("%d", &n);
	ptr = (int *)realloc(ptr, n * sizeof(int));
	if (ptr == NULL)
	{
		printf("Reallocation failed\n");
		free(ptr);
		return 1;
	}
	printf("Previous address = %p\nNew address = %p\n", (void*)ptr, (void*)ptr1);
	printf("Values are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", *(ptr1 + i));
	}
	free(ptr1);
	return 0;
}
