//5. SET 0,1,2 in an array
#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter the size.\n");
	scanf("%d",&n);
	int arr[n];
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
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
return 0;
}

