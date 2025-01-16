//Write a programme to enter and display record of student where member can be name,age,marks,roll number.
#include<stdio.h>
struct student
{
	char name[20];
	int age;
	int roll_no;
	float marks;
};
int main()
{
    struct student s;
	printf("Enter the record of a student");
	printf("Enter name of student:");
	gets(s.name);
	printf("Enter the age: ");
	scanf("%d",&s.age);
	printf("Enter the roll_no: ");
	scanf("%d",&s.roll_no);
	printf("Enter marks: ");
	scanf("%f",&s.marks);
	printf("Record of the student");
	printf("name:%s",s.name);
	printf("\nAge:%d",s.age);
	printf("\nroll_No:%d",s.roll_no);
	printf("Marks:%f",s.marks);
	return 0;
}
