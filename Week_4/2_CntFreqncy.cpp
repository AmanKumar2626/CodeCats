//2.Count Frequency of every element of the array
#include<stdio.h>
int main()
{
	int n,c;
	printf("Enter size of the array - ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the elements of array\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		c=1;
		if(a[i]!=-1)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					c++;
					a[j]=-1;
				}
			}
			b[i]=c;
		}
	}
	for(int i=0;i<n;i++)
	{
			if(a[i]!=-1)
				printf("%d - %d times\n",a[i],b[i]);
	}
	return 0;
}
