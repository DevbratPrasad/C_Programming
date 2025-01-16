#include<stdio.h>
int main()
{
	FILE *fp;
	
	fp=fopen("xyz.ppt","w");
	if(fp==NULL)
	{
		printf("File not found");
	}
	else
	{
		printf("File is present");
		fprintf(fp,"Hello NIET\n");
		fprintf(fp,"G2 Batch is ready for Test");
	}
	return 0;
}
