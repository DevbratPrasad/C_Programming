//write a programme to display a book record using union.
#include<stdio.h>
union books
{
	char name[20];
	int no;
	float price;
};
int main()
{
	union books b;
	printf("Enter book name: ");
    scanf("%s", b.name);
    printf("Book name = %s", b.name);
    printf("Enter ISBN of book");
    scanf("%d",&b.no);
    printf("ISBN = %d",b.no);
    printf("Enter the price");
    scanf("%f",&b.price);
    printf("Price = %f",b.price);
    return 0;
    
}
