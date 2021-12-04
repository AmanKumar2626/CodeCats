//7 : Check Whether Two Strings are Almost Equivalent.
#include<stdio.h>
#include<string.h>
#include<math.h>

bool check(char * word1, char * word2){
    int len=strlen(word1);
    
    for(char ch='a';ch<='z';ch++){
    	int cnt1=0,cnt2=0;
        for(int i=0;i<len;i++)
        {
            if(ch==word1[i])
                cnt1++;
            if(ch==word2[i])
                cnt2++;
        }
        int dif=abs(cnt1-cnt2);
        if(dif>3)
            return false;
        }
    return true;
}
int main()
{
	char str1[100],str2[100];
	scanf("%s",str1);                                  
	scanf("%s",str2);
	
	if(check(str1,str2))
	    printf("true");
	else
	    printf("false");
	return 0;
}
