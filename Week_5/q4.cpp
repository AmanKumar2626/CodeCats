//Swap elements using call by reference :
#include <stdio.h>
void swapping(int *x,int *y,int *z)
{
    int tmp;
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}
int main()
{
    int a,b,c;
    printf("Enter the three elements\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
	
	
    printf("\nThe value before swapping are :-\n");
    printf("A = %d\nB = %d\nC = %d\n",a,b,c);
    swapping(&a,&b,&c);
    printf("\nThe value after swapping are :-\n");
    printf("A = %d\nB = %d\nC = %d\n\n",a,b,c);
    return 0;
}

