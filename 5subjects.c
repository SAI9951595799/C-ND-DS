#include<stdio.h>
int main ()
{
	int a,b,c,d,e,s;
	float h;
	printf("enter the values a,b,c,d,e");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	s=a+b+c+d+e;
	printf("the value is:s=%d",s);
	h=(a+b+c+d+e)/5;
	printf("the average is:h=%.2f",h);
}
