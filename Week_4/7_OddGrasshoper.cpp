//7.Odd Grasshoper 
#include<stdio.h>
int main()
{
	int t,result;
	scanf("%d",&t);
	int x[t+1],n[t+1];
	for(int i=1;i<=t;i++)
	scanf("%d%d",&x[i],&n[i]);
	for(int i=1;i<=t;i++)
	{
		 result=x[i];
	    for(int j=1;j<=n[i];j++)
	    {
	        if(result%2==0)
	            result-=j;
	        else
	            result+=j;   
	    }
	printf("%d\n",result);    
	}
	return 0;
}
