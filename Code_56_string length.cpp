#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],length;
	printf("Enter a string1: ");
	gets(str1);
	printf("Entered string1: ");
	puts(str1);
	length=strlen(str1);
	printf("Length of string: %d",length);
	return 0;
}

