//1. Find one extra character in a string 
#include<stdio.h>
#include<string.h>
int main()
{
	int l1,l2,i,j;
	char str1[20],str2[20];
	printf("string strA = ");
    scanf("%s",str1);
	printf("string strB = ");
    scanf("%s",str2);
	l1=strlen(str1);
	l2=strlen(str2);
	for(i=0;i<l2;i++)
	{
		for(j=0;j<l1;j++)
		{
	    	if(str2[i]==str1[j])
              break;
		}
        if(j==l1)         
		    printf("%c",str2[i]);
	}
	return 0;
}
