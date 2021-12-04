//5. Jewels and Stones 
#include<stdio.h>
#include<string.h>
int main()
{
	char jewel[30],stone[30],ch;
	int len1,len2,cnt=0;
	printf("jewels = ");
	scanf("%s",jewel);
	printf("stones = ");
	scanf("%s",stone);
	
	len1=strlen(stone);
	len2=strlen(jewel);
	for(int i=0;i<len2;i++)
	{
		for(int j=0;j<len1;j++)
		{
			if(jewel[i]==stone[j])
			 cnt++;
		}
	}
	printf("%d",cnt);
	return 0;	
}
