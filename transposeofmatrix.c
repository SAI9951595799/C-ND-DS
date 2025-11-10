#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("enter rows and coloumns");
	scanf("%d%d",&m,&n);
	int matrix[m][n],transpose[n][m];
	printf("enter elements of the matrix:\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&matrix[i][j]);
	transpose[j][i]=matrix[i][j];
	printf("transpose of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d",transpose[i][j]);
		printf("\n");
	}
}
