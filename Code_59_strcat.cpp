#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	strcat(str1,str2);
	printf("Combined string:= %s",str1);
	return 0;
}

