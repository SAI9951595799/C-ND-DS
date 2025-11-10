#include<stdio.h>
struct emp
{
	int emp;
	char name[50];
};
int main()
{
	struct emp e[3];
	int i;
	printf("the size is:%d\n",sizeof(e));
	printf("the size is:%d\n",sizeof(struct emp));
	printf("enter emp details:\n");
	printf("\nenter empno:");
	for(i=0;i<3;i++)
	{
		printf("enter the emo no and name of employee:\n");
		scanf("%d%s",&e[i].emp,&e[i].name);
	}	
	for(i=0;i<3;i++)
	{
		printf("the number of emloyee is:%d\n",e[i].emp);
		printf("the name of employee is :%s\n",e[i].name);
	}
		
}
