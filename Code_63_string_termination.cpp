#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("Length of string=%d",i);
	return 0;
	
	
	
	
}
