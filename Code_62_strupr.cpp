#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter string1: ");
	gets(str);
	strupr(str);
	printf("Converted to upper case: ");
	puts(str);
	return 0;
}
