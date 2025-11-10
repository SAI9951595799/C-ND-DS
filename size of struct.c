#include<stdio.h>
union emp
{
	int e;
	char a[50];
};
int main()
{
	union emp e;
	printf("the size is:%d\n",sizeof(e));
	printf("the size is:%d\n",sizeof(union emp));
}
