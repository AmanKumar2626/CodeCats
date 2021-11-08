#include<stdio.h>
int main()
{
	for(int i=0;i<19;i++)
	{
		for(int j=0;j<19;j++)
		{
			if(i==j || (i+j)==(19-1))
			   printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
}
