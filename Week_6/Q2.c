//2.Check Whether a number is a Duck Number or Not 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int cnt=-100,a=0;
	scanf("%s",str);
	int l=strlen(str);
	for(int i=0;i<l;i++)
	{
		if(str[i]!='0' && a==0)
		 {cnt=0; a++;}
		if(str[i]=='0')
		   cnt++;
	}
	if(cnt>0)
	   printf("It is a duck number.\n");
	else 
	   printf("It is not a duck number.\n");
	return 0;
}
