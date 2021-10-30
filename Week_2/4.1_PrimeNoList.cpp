//program to find the prime numbers within a range of numbers

#include<stdio.h>
int main()
{
	int num,count;
	printf("Enter the range of prime numbers - ");
	scanf("%d",&num);
	printf("SI No.  Prime No.\n");
	for(int i=1,k=1;i<=num;i++)
    {   count =0;
	    for(int j=1;j<=i;j++)
	     {   
		    if(i%j==0)
		    count++;
		 }
		 if(count==2)
	     {
		 	printf("%d.\t%d\n",k,i);
		 	k++;
          }	
}
return 0;
}
