#include<stdio.h>
int main()
{
	FILE *fp;
	
	fp=fopen("xyz.txt","w");
	if(fp==NULL)
	{
		printf("File not found");
	}
	else
	{
		printf("File is present");
		fprintf(fp,"Hello NIET");
	}
	return 0;
}
