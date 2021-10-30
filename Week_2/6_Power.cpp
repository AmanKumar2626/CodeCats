//program in C to display the number in reverse order
#include<stdio.h>
int main()
{
	int base,res=1,power;
	printf("Enter base Number and its power\n");
	scanf("%d%d",&base,&power);
    for(int i=1;i<=power;i++)
	    res*=base;
	printf("The %d power of base %d is %d.",power,base,res);
	return 0;
}
