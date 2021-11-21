//Calculate sum of positive and negative elements of array.
#include<stdio.h>
void sum(int *p,int n);
int main()
{
	int i,n;
	printf("Enter number of elements.\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements.\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	sum(arr,n);
    return 0;
}
void sum(int *p,int n)
{
	int i,s1=0,s2=0;
	for(i=0;i<n;i++)
	{
		if(*p>0)
		s1+=*p;
		else if(*p<0)
		s2+=*p;
		p++;
	}
	printf("Positive Sum = %d\n",s1);
    printf("Negative Sum = %d\n",s2);
}
