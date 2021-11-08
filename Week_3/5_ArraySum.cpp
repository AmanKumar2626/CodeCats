/*find the sum of all elements and Also find Sum of Even and Odd numbers present in array & Sum of Odd
and Even Position Elements of an array.*/
#include<stdio.h>
int main()
{
	int n,sum,oddSm,evenSm,oddPSm,evenPSm;
	sum=oddSm=evenSm=oddPSm=evenPSm=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(arr[i]%2==0)
		evenSm+=arr[i];
		if(arr[i]%2==1)
		oddSm+=arr[i];
		if(i%2==0)
		evenPSm+=arr[i];
		if(i%2==1)
		oddPSm+=arr[i];
    }
    printf("%d %d %d %d %d",sum,evenSm,oddSm,evenPSm,oddPSm);
    return 0;
}
