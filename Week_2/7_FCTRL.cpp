#include<stdio.h>
int countZero(int num)
{
	int cnt=0;
	while(num>0)
	{
		cnt+=(num/5);
		num/=5;
	}
	return cnt;
}
int main()
{
	int term,num,cnt;
	scanf("%d",&term);
	while(term--)
	{
		scanf("%d",&num);
	    cnt=countZero(num);
	    printf("%d\n",cnt);
	}
	return 0;
}

