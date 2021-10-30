//Check whether a given number is an armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int num,temp,sum=0;
	double ld,count=0;
	printf("You can Check any armstrong number upto 16 digit.\n");
	printf("Enter any numbers - ");
	scanf("%llu",&num);
	temp=num;
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
	temp=num;
	while(temp>0)
	{
		ld=temp%10;
		sum+=pow(ld,count);
		temp=temp/10;
	}
	if(sum==num)
	     printf("%llu is Armstrong Number.\n",num);
	else 
	     printf("%llu is not an Armstrong Number.\n",num);
    return 0;
}
