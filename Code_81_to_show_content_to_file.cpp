// write a programme to show content of a file.
#include<stdio.h>
int main()
{
	FILE *file = fopen("Example.txt","w");
	if (file == NULL)
	{
		printf("Error opening file.\n");
		return 1;
	}
	fprintf(file, "Hello World\n");
	printf("Data written to file sucessfully\n");
	fclose(file);
	return 0;
}
