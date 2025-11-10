#include<stdio.h>
int main ()
{
	int a;
	float b;
	char c;
	int d=6;
	printf("enter the values");
	scanf("%d,%f,%c",&a,&b,&c);
	d+=a;
	d-=a;
	
	printf("the values are:a=%d",a);
	printf("the values are:b=%f",b);
	printf("the values are:c=%c",c);
	printf("the values are:c=%d",d);
}

