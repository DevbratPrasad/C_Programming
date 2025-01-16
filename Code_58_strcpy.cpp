#include<stdio.h>
#include<string.h>
int main()
{
	char source[50];
	char destination[50];
	printf("Enter the first string: ");
	gets(source);
	strcpy(destination,source);
	puts("Source:");
	puts(source);
	puts("Destination:");
	puts(destination);
	return 0;
}
