#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("enter a elements");
	for(i=0;j<2;i++)
	{
		for(j=0;j<2;j++)
		{
		   scanf("%d",&a[i][j]);
	    }
	}
    printf("enter b elements");
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		scanf("%d",&b[i][j]);
		}
	}
	    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\n",c[i][j]);
		}
	}
	printf("\n\n");
} 
