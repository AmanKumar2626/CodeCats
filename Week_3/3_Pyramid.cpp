//Create star Pyramid pattern
#include<stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>i;j--)
		printf("  ");
		for(int k=1;k<=i;k++)
		printf("* ");
		for(int l=1;l<i;l++)
		printf("* ");
		printf("\n\n");
	}
	return 0;
}
