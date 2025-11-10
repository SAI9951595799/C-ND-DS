#include<stdio.h>
int main()
{
	int r,n,i,j,sum=0;
	printf("enter the number of rows and coloumns of square matrix:");
	scanf("%d", &r);
	int a[r][r];
	printf("enter the elements of the matrix:\n");
	for(i=0; i<r; i++)
	for(j=0; j<r; j++) 
	scanf("%d", &a[i][j]);
	for(i=0; i<r; i++)
	 sum = sum+ a[i][i];
	printf("trace of the matrix : %d",sum);
}
