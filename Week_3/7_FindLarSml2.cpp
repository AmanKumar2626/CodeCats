//Find Largest and Smallest Element in Array by sorting
#include<stdio.h>
int main()
{
	int n,temp;
	printf("How many elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Array:");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
			    temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;	
			}
		}
	}
    printf("The largest element is %d\n",arr[n-1]);
    printf("The smallest element is %d\n",arr[0]);
    printf("Second largest is %d\n",arr[n-2]);
    printf("Second Smallest is %d\n",arr[1]);
    return 0;
}
