//6. Goal Parser Interpretation
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],out[20]={0};
	int len,j=0;
	printf("command = ");
	scanf("%s",str);
	len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]=='G')
		{
			out[j]='G';
			j++;
		}
		else                                                       
		{
			if(str[i]=='(' && str[i+1]==')')
			{
				out[j]='o';
				j++;i++;
			}
			else{
				if(str[i]=='(' && str[i+1]=='a')
				{
					out[j]='a';
					out[j+1]='l';
					j+=2;i+=3;
				}
			}
		}
	}
	for(int i=0;out[i]!=0;i++)
	printf("%c",out[i]);
	return 0;
}

