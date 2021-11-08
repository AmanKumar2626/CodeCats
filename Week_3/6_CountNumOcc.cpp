//Count Total Number of occurrences of a given element in an array.
#include<stdio.h>
int main()
{
	int size,num,cnt=0;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&num);
	for(int i=0;i<size;i++)
	{
		if(arr[i]==num)
		cnt++;
	}
	printf("%d",cnt);
    return 0;
}
