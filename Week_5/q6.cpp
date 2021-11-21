//Count positive ,negetive and zero number in array using pointer. 
#include<stdio.h>
void count(int *p,int n);
int main()
{
	int i,n,*p;
	printf("Enter number of elements.\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements.\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	count(arr,n);
	return 0;
}
void count(int *p,int n)
{
	int pve=0,nve=0,zro=0,i;
	for(i=0;i<n;i++)
	{
		if(*p>0)
		   pve++;
		else if(*p<0)
		   nve++;
		else 
		   zro++;
	    p++;
	}
	printf("Positive No.- %d\nNegetive No.- %d\nZero No. - %d\n",pve,nve,zro);
}
