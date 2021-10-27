//C program to input basic salary of an employee and calculate its Gross salary 
#include<stdio.h>
int main()
{
	int bsc_sal,hra,da;
	float grs_sal;
	printf("Enter the Basic Salary.\n");
	scanf("%d",&bsc_sal);
    if(bsc_sal<=10000)
    {
    	hra=bsc_sal*0.2;
    	da=bsc_sal*0.8;
	}
	else if(bsc_sal<=20000)
    {
    	hra=bsc_sal*0.25;
    	da=bsc_sal*0.9;
	}
	else if(bsc_sal>20000)
    {
    	hra=bsc_sal*0.3;
    	da=bsc_sal*0.95;
	}
	grs_sal=bsc_sal+hra+da;
	printf("Gross Salary = %.2f",grs_sal);
	return 0;
}
