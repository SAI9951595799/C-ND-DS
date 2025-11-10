#include<stdio.h>
struct student
{
	int tot;
	float avg;
};

int main()
{
	struct student s1[10]; 
	int i;
	printf("\n enter the student data :");
	for(i=1;i<4;i++)
	{
	printf("enter the student%d",i);
	scanf("%d %f",&s1[i].tot,&s1[i].avg);
}
    for(i=1;i<4;i++)
    {
    printf("\n student data is;");
	printf("%d %f",s1[i].tot,s1[i].avg);
}
}


