//1.Reverse the input Array
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size.\n");
	scanf("%d",&n);
	int arr[n],rev[n];
	printf("Enter the element of array.\n");
	for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	for(int i=n-1,j=0;i>=0;i--,j++)
	    rev[j]=arr[i];
    for(int i=0;i<n;i++)
        printf("%d ",rev[i]);
	return 0;
}
