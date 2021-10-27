//C program to check whether a year is a leap year or not.
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year -");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || year%400==0)
	   printf("%d is Leap year.\n",year);
	else 
	   printf("%d is Non Leap year.\n",year);
	return 0;
}
