#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter a string1: ");
	gets(str);
	strlwr(str);
	printf("Converted string in lower case: ");
	puts(str);
	return 0;
}
