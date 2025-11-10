#include<stdio.h>
union data{
	int i;
	float j;
};
int main()
{
	union data d1;
	d1.i=10;
	printf("%d",d1.i);
	d1.j=12.5;
	printf("\n%.2f",d1.j);
	printf("\nthe value of 'i' after assigning 'j':");
	printf("\n%d",d1.i);
}
