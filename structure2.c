#include<stdio.h>
struct student
{
	int tot;
	float avg;
};
int main()
{
	struct student s1;
	struct student s2;
	printf("enter the student 1 data:");
	scanf("%d %f",&s1.tot,&s1.avg);
	s2=s1;
	printf("%d \n%f",s2.tot,s2.avg);
	
}
