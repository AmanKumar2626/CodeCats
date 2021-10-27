//C program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any Number - ");
	scanf("%d",&num);
	if(num%2==0)
		printf("%d is Even Number",num);
	else
		printf("%d is Odd Number",num);
	return 0;
}
