//program to calculate the factorial of a given number
#include<Stdio.h>
int main()
{
	unsigned long long int fact=1;
	int num;
	printf("Enter any number from 0-20.\n");
	scanf("%d",&num);
	if(num<0)
    	printf("Factorial Doesn't exist.\n");
	for(int i=1;i<=num;i++)
    	fact*=i;
	printf("\nFactorial is %llu",fact);	
	return 0;
}
