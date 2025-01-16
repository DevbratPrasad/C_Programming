#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter the string: ");
	gets(str);
	strrev(str);
	printf("Reversed string:-%s",str);
	return 0;
}
