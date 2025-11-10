#include<stdio.h>
#include<stdlib.h>
int getmax(int arr[],int n){
	int max=arr[0],i;
	for(i=1;i<n;i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
void countsort(int arr[],int n,int exp){
	int output[n];
	int i,count[10]={0};
	//store count of occurences in count[]//
	for(i=0;i<n;i++){
		count[(arr[i]/exp)%10]++;
	}
	
	for(i=1;i<10;i++)
	{
		count[i]+=count[i-1];
	}
	
	for(i=n-1;i>=0;i--)
	{
		output[count[(arr[i]/exp)%10]-1]=arr[i];
		count[(arr[i]/exp)%10]--;
	}
	//copy the output array to arr[], so thar arr[] now contains sorted numbers
	for(i=0;i<n;i++){
		arr[i]=output[i];
	}
}
//the main function to that sorts arr[] of size n using radix sort
void radixsort(int arr[],int n){
	//find the maximum number to know the number of digits
	int max=getmax(arr,n),exp;
	//do counting sort for every digit
	for(exp=1;max/exp>0;exp*=10){
		countsort(arr,n,exp);
	}
}
void printarray(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf(" \n ");
}
int main(){
	int arr[]={4,65,76,34,15,90};
	int n= sizeof(arr)/sizeof(arr[0]);
	radixsort(arr,n);
	printarray(arr,n);
	return 0;
}

