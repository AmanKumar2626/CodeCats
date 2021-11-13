/*4.TWO SUM : Given an array of integer numbers and an integer target, return indices of
the two numbers such that they add up to target*/
#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter the size.\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the target.\n");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		 for(int j=i+1;j<n;j++)
		 {
		 	if(arr[i]+arr[j]==k)
		 	printf("%d,%d",i,j);
		 }
		
	}
	return 0;
}
