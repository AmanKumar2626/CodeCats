//Program to find total sum and also Sum of odd numbers and even numbers
#include<stdio.h>
int main()
{
	int num,sum,odd=0,even=0;
	printf("Enter any number - ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		printf("%d ",i);
		sum+=i;
		
		if(i&1)
		   odd+=i;
		else
		   even+=i;
	}
	printf("\nTotal Sum:- %d",sum);
	printf("\nEven Sum:- %d",even);
        printf("\nOdd Sum:- %d",odd);	
	return 0;
}
