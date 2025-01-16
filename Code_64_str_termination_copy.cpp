#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int i;
	printf("Enter str1: ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("Copied str2: ");
	puts(str2);
	return 0;
}
