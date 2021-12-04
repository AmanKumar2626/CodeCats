/*3. Longest Subsequence where every character appears at
least k-times*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int k,cnt;
	printf("str = ");
	scanf("%s",str);
	printf("K = ");
	scanf("%d",&k);
	
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		cnt=0;
		for(int j=0;j<len;j++)
		{
			if(str[i]==str[j])
			 cnt++;
		}
		if(cnt>=k)
		printf("%c",str[i]);
	}
	return 0;
 } 
