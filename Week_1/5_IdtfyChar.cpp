//Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character - ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	   printf("%c is Alphabet.",ch);
	else if(ch>='0' && ch<='9')
	   printf("%c is Digit",ch);
	else 
	   printf("%c is Symbol",ch); 
	return 0;   
}
