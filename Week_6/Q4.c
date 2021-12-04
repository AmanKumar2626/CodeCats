//4. Longest Subsequence where every character appears at least k-times
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char roman[20],ch;
	int num=0;
	
	scanf("%s",roman);
	int l=strlen(roman);
	while(roman[0]!='\0')
	{
		ch=roman[--l];
	     switch(ch)
	     {
	     	case 'I':
	     		num+=1;
	     		break;
            case 'V':
            	if(roman[l-1]=='I')
            	{num+=4; l--;}
            	else num+=5;
            	break;
            case 'X':
            	if(roman[l-1]=='I')
            	{num+=9; l--;}
            	else num+=10;
            	break;
            case 'L':
            	if(roman[l-1]=='X')
            	{num+=40; l--;}
            	else num+=50;
            	break;
            case 'C':
            	if(roman[l-1]=='X')
            	{num+=90; l--;}
            	else num+=100;
            	break;
            case 'D':
            	if(roman[l-1]=='C')
            	{num+=400; l--;}
            	else num+=500;
            	break;
            case 'M':
            	if(roman[l-1]=='C')
            	{num+=900; l--;}
            	else num+=1000;
            	break;
            default:
            	
            	printf("Its not a Roman Number.\n");
                exit(1);	   	
		 }
		 roman[l]='\0';
	}
	printf("%d",num);
	return 0;
}
