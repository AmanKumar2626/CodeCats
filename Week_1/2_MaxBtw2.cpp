#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two Number\n");
	scanf("%d%d",&num1,&num2);
	if(num1==num2)
	    printf("%d and %d are equal",num1,num2);
	else if(num1>num2)
	    printf("Maximum :- %d\nMinimum :- %d",num1,num2);
	else 
	   	printf("Maximum :- %d\nMinimum :- %d",num2,num1);
	return 0;
}
