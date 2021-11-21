//print ASCII values of character of user given string using pointers.
#include<stdio.h>
int main()
{
	char str[30],*p;
	printf("Enter String.\n");
	gets(str);
	p=str;
	while(*p!='\0')
	{
		printf("%c = %d\n",*p,*p);
		p++;
	}
return 0;
}
