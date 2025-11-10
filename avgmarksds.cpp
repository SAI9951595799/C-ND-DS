//create a structer called students with members ,name ,age ,total marks of a students
//write a c program to input data for 3 students and dispaly the information and the find the average,total marks
#include<stdio.h>
struct student
{
	char name[100];
	int age;
	int marks;
};
int main()
{
	int n;float average=0.00,total=0;int i;
	printf("enter the number of student");
	scanf("%d",&n);
	struct student s[n];
	for (i=0;i<n;i++)
	{
		printf("enter the name of the students:%d",i+1);
		scanf("%s",s[i].name);
		printf("enter the age");
		scanf("%d",&s[i].age);
		printf("enter marks");
		scanf("%f",&s[i].marks);
		total+=s[i].marks;
	}
	average=total/n;
	printf("\ntotal marks:%.2f",total);
	printf("\naverage marks:%.2f",average);
	return 0;
	}
