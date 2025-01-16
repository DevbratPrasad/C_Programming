//Array of structure
#include<stdio.h>
struct student
{
	int age;
	int roll_no;
	float marks;
	char name[20];
};
int main()
{
	struct student s[5];
	int i;
	printf("Enter the record of student: ");
	printf("\nEnter student name, age, roll_no, marks: ");
	for(i=0;i<=4;i++)
	{
		scanf("%s %d %d %f",&s[i].name, &s[i].age, &s[i].roll_no, &s[i].marks );
	}
	for(i=0;i<=4;i++)
	{
		printf("Record of student \n");
		printf("Name:%s\n",s[i].name);
		printf("Age:%d\n",s[i].age);
		printf("Roll no.:%d\n",s[i].roll_no);
		printf("Marks:%f",s[i].marks)
	}
	return 0;
}

