#include<stdio.h>
int main()
{
	int month,date,day,m,d;
	printf("Enter Date and Month of 2021 and i'll tell u the day.\n\n");
	printf("Enter the month between 1-12.\n");
	scanf("%d",&month);
	if(month==2){
     	printf("Enter the Date between 1-28.\n");
 	    scanf("%d",&date);
        }
    else if(month==4 || month==6 || month==9 || month==11)
    {
    	printf("Enter the Date between 1-30.\n");
 	    scanf("%d",&date);
	}
	else 
	{
		printf("Enter the Date between 1-31.\n");
 	    scanf("%d",&date);
	}

	 switch (month)
   {
       case 1: m=1;  break;
       case 2: m=4;  break;
       case 3: m=4;  break;
       case 4: m=0;  break;
       case 5: m=2;  break;
       case 6: m=5;  break;
       case 7: m=0;  break;
       case 8: m=3;  break;
       case 9: m=6;  break;
       case 10: m=1; break;
       case 11: m=4; break;
       case 12: m=6; break;
 }
    d=date%7;
    day=d+m+4;
    printf("Date:- %d/%d/2021\n",date,month);
    switch (day%7)
   {
       case 1: printf("Day:- Sunday");  break;
       case 2: printf("Day:- Monday");  break;
       case 3: printf("Day:- Tuesday");  break;
       case 4: printf("Day:- Wednesday");  break;
       case 5: printf("Day:- Thursday");  break;
       case 6: printf("Day:- Friday");  break;
       case 0: printf("Day:- Saturday");  break;
   }
	return 0;	
}
