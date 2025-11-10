#include<stdio.h>
int main ()
{
	int a;
	float b;
	char c;
	printf("m enter the value");
	scanf("%d%f%c",&a,&b,&c);//reading value\\
	print("the value of %d%f%c",a,b,c);//print values\\
	printf("the address of %d%d%d",&a&b&c);
	printf("the size of integer %d",sizeof(int));
}
