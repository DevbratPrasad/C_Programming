#include<stdio.h>
union test
{
	char name[20];
	int roll_no;
	int marks;
};
int main()
{
	union test u;
	printf("Size of union = %d", sizeof(u));
	return 0;
}
