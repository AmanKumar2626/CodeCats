//program to determine whether a given number is prime or not.
#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter any number ");
	scanf("%d",&num);
        for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==2)
	    printf("%d is Prime Number.",num);
	else
	    printf("%d is not a Prime Number.",num);
	return 0;
}
