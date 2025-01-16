#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int a;
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	a=strcmp(str1,str2);
	printf("a=%d\n",a);
	if(a==0)
	{
		printf("String are same");
	}
	else
	{
		printf("String are not same");
	}
	return 0;
}
