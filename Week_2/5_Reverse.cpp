//Program to display the number in reverse order
#include<stdio.h>
int main()
{
	int num,rev=0;
	printf("Enter any number ");
	scanf("%d",&num);
	while(num!=0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	printf("The reverse is %d\n",rev);
	return 0;
}
