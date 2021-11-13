//3.Rotate the array by “k” steps in right direction
#include<stdio.h>
void reverse(int a[],int s,int n);
int main()
{
	int n,k;
	printf("Enter length of array.\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements.\n");
	for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	printf("Enter the steps to rotate array.\n");
	scanf("%d",&k);
	k=k%n;
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
	return 0;
}
void reverse(int a[],int s,int n)
{
	int temp;
	while(s<n)
	{
		temp=a[s];
		a[s]=a[n];
		a[n]=temp;
		s++;  n--;
    }
}
