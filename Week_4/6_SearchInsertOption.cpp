//6. Search Insert Position 
#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter the size.\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements.\n");
	for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	printf("Enter the target value.\n");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k){
		   printf("%d",i);
	       break;
	    }
		else{
		         if(arr[i]>k){
		   	     printf("%d",i);
		   	     break;}
		   }
	}
	return 0;
}
