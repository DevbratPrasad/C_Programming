#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20],temp;
	int i;
	printf("Enter str1: ");
	gets(str1);
	printf("Enter str2: ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==str2[i])
		{
			temp = 1;
		}
		else
		{
			temp = 0;
		}
	}
	if (temp == 1)
	{
		printf("String is same");
	}
	else
	{
		printf("String is not same");
	} 
	return 0;
}
