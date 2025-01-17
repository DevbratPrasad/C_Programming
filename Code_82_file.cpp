#include<stdio.h>
int main()
{
	FILE *inputfile, *evenfile, *oddfile;
	int num[50], i;
	inputfile = fopen("number.txt", "w");
	if(inputfile == NULL)
	{
		printf("Error opening Numbers");
		return 0;
	}
	for(i=0; i<30; i++)
	{
		if(num[i]%2 == 0)
		{
			fprintf(evenfile,"%d\n",num[i]);
		}
		else
		{
			fprintf(oddfile,"%d\n", num[i]);
		}
		fclose(evenfile);
		fclose(oddfile);
		printf("Enter 30 number \n");
		for(i=0;i<30;i++)
		{
			scanf("%d", &num[i]);
			fprintf(inputfile, "%d\n",num[i]);
		}
		evenfile=fopen("EVEN,txt","w");
		oddfile=fopen("ODD.txt","w");
		if(evenfile == NULL || oddfile == NULL);
		{
			printf("Error opening EVEN.txt ot ODD.txt file\n");
			return 0;
		}
	}
}
