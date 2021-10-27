#include<stdio.h>
int main()
{
	int phy,che,bio,mat,com,tot;
	float pctg;
	printf("Enter your Marks of subject.\n\n");
	printf("Physics - "); 
	scanf("%d",&phy);
    printf("Chemistry - "); 
	scanf("%d",&che);
	printf("Biology - "); 
	scanf("%d",&bio);
	printf("Mathematics - "); 
	scanf("%d",&mat);
	printf("Computer - "); 
	scanf("%d",&com);
	
	tot=phy+che+bio+mat+com;
	pctg=tot/5.0;
	
	printf("\nTotal Marks = %d\n",tot);
    printf("Percenatge = %.2f%%\n",pctg);
	if(pctg>=90)
	   printf("Grade = A\n");
	else if(pctg>=80)
	   printf("Grade = B\n");
	else if(pctg>=70)
	   printf("Grade = C\n");
	else if(pctg>=60)
	   printf("Grade = D\n");
	else if(pctg>=40)
	   printf("Grade = E\n");
	else if(pctg<40)
	   printf("Grade = F\n");
	return 0;
}
