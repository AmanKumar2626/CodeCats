//Count Upper case & lower case letter, digits, and symbols using pointer.
#include<stdio.h>
int main()
{
	char str[30],*p;
	int c1=0,c2=0,c3=0,c4=0;
	printf("Enter String.\n");
	gets(str);
	p=str;
	while(*p!='\0')
	{
		if(*p>=65 && *p<=90)
		     c1++;
		else  if(*p>=97 && *p<=122)
		    c2++;
	    else if(*p>=48 && *p<=57)
	         c3++;
	    else c4++;
	    p++;
	  }
	  printf("Upper Case = %d\n",c1);
	  printf("Lower Case = %d\n",c2);
	  printf("Digits = %d\n",c3);
	  printf("Special Symbols = %d\n",c4);
	  return 0;
}
