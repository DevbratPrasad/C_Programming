#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float perc;
};
int main()
{
	struct student s1 = { 10, "Matru", 87.5	};
	struct student s2;
	printf("Enter student s2 details");
	scanf("%d %s %f",&s2.id, &s2.name, &s2.perc);
	printf("Details of students s1");
	printf("Student id = %d\t student name = %s\t student percentage = %f", s1.id, s1.name, s1.perc);
	printf("    same of student s2    ");
	return 0;
}
