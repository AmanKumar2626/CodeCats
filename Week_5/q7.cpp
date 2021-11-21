//Sort an array by pointer.
#include<stdio.h>
void sort(int *p,int n);
int main()
{
    int i,n,*p;
	printf("Enter number of elements.\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements.\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	sort(arr,n);
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0; 
}
void sort(int *p,int n)
{
	int i,j,tmp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				tmp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=tmp;
			}
		}
	}
	
}
