#include <stdio.h>
void changePosition(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void charPermu(char *cht, int stno, int endno)
{
   int i;
   if (stno == endno)
     printf("%s\t", cht);
   else
   {
       for (i = stno; i <= endno; i++)
       {
          changePosition((cht+stno), (cht+i));
          charPermu(cht, stno+1, endno);
          changePosition((cht+stno), (cht+i)); 
       }
   }
} 
int main()
{
    char str[30],*p;
    int n,i,fact =1;
    printf("Enter a string (repitation not allowed).\n");
    scanf("%s",str);
    p=str;
    for(n=1;*(p+n)!='\0';n++);
    for (i = 1; i <= n; ++i) {
            fact *= i;}
    printf("String Length - %d\nTotal Permutation is- %d\n\n",n,fact);
    printf(" The permutations of the string are : \n");
    charPermu(str, 0, n-1);
     printf("\n\n");
    return 0;
}
