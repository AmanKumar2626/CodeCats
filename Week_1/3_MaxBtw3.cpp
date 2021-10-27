//C program to find the maximum between three numbers.
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter three Number\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1==num2 && num1==num3)
	     printf("All three are equal");
	else if(num1>num2 &&num1>num3)
		printf("Maximum :- %d",num1);
	else if(num2>num3)
		printf("Maximum :- %d",num2);
	else 
	    printf("Maximum :- %d",num3);
	return 0;
}
