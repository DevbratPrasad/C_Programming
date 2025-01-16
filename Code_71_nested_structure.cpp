#include<stdio.h>
//defining the inner structure
struct Date
{
	int day;
	int month;
	int year;
};
//defining the outer structure
struct Person
{
	char name[50];
	int age;
	float height;
	struct Date birthdate; //nested structure
};
int main()
{
	struct Person person1;
	snprintf(person1.name, sizeof(person1.name), "Alice");
	person1.age = 30;
	person1.height = 5.5;
	person1.birthdate.day = 15;
	person1.birthdate.month = 7;
	person1.birthdate.year = 1990;
	printf("Name: %s\n", person1.name);
	printf("Age: %d\n",person1.age);
	printf("Height: %.2f\n", person1.height);
	printf("Birthdate: %02d/%2d/%4d\n", person1.birthdate.day, person1.birthdate.month, person1.birthdate.year);
    return 0;
}
