#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void mainpage();
void menupage();
void menu();
void mens();
void womens();
void men();
void women();
void kid();
void kids();
void signIn();
void signUp();
void myCart();
void employee();

void placeorder(int total);
void buylist(char file[]);
void insert_record(char file[]);
void display_record(char file[]);
void del_record(char file[]);
void search_record(char file[]);
void update_record(char file[]);

char userfile[30]="Users\\";
char userId[30];

struct user{
	unsigned int phone;
	int day,mon,year;
	char name[30];
	char email[30];
	char adres[50];
	char pswd[20];
    };
    struct user u;

struct cloth {
    int id;
	char name[30];
	int price;
	int discount;
	int bprice;
};
struct cloth c;

int main()
{
	mainpage();
	printf("Please press Any key to enter.!!");
	getch();
	menupage();
	return 0;
}
void mainpage()
{
	system("cls");
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                     !! FASHION FACTORY !!                         ######\n");
	printf("######                                                                   ######\n");
	printf("######                 * Fashion as unique as YOU are *                  ######\n");
	printf("######                                                                   ######\n");
	printf("######            A Trendy collection of all type of cloths              ######\n");
	printf("######                 for ladies, Gents & Kids.                         ######\n");
	printf("######                                                                   ######\n");
	printf("######                Please Visit and Explore our shop.                 ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######      Email - aman@gmail.com            Contact - 0123456789       ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
}
void menupage()
{
	system("cls");
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                     1. MEN`S                                      ######\n");
	printf("######                     2. WOMEN`S                                    ######\n");
	printf("######                     3. KIDS                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                     4. Sign In                                    ######\n");
	printf("######                     5. Sign Up                                    ######\n");
	printf("######                     6. Employee                                   ######\n");
	printf("######                     7. Exit                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######       Email - aman@gmail.com            Contact - 0123456789      ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	
	int ch;
	printf("Enter your choice :- ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			men();
			break;
		case 2:
			women();
			break;
		case 3:
			kid();
			break;
		case 4:
			signIn();
			break;
		case 5:
			signUp();
			break;
		case 6:
			employee();
			break;
		case 7:
			main();
			break;
		default:
			printf("Invalid Choice;");
			menupage();
			break;
	}
}
void menu()
{
	system("cls");
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                     1. MEN`S                                      ######\n");
	printf("######                     2. WOMEN`S                                    ######\n");
	printf("######                     3. KIDS                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                     4. My cart                                    ######\n");
	printf("######                     5. Log Out                                    ######\n");
	printf("######                     6. Exit                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######       Email - aman@gmail.com            Contact - 0123456789      ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	int ch;
	printf("Enter your choice :- ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			mens();
			break;
		case 2:
			womens();
			break;
		case 3:
			kids();
			break;
		case 4:
			myCart();
			break;
		case 5:
			strcpy(userfile,"Users\\");
			menupage();
			break;
		case 6:
			main();
			break;
		default:
			printf("Invalid Choice;");
			menu();
			break;
	}
}
void signUp()
{
	int i,j;
	system("cls");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                          SignUp Page                              ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	FILE *fp,*fp2;
	fp=fopen("UserDtl.txt","ab+");
	fp2=fopen("Uservfy.txt","a");
	if(fp==NULL || fp2==NULL)
	{printf("Can't open file.\n");
	exit(0);
	}
	fflush(stdin);
	printf("\n\nEnter Name :- ");
	scanf("%[^\n]s",u.name);
	printf("Enter Email :- ");
	scanf("%s",u.email);
	printf("Enter password :- ");
	scanf("%s",&u.pswd);
	fprintf(fp2,"%s  %s ",u.email,u.pswd);
	printf("Enter DOB  :- ");
	scanf("%2d%*c%2d%*c%4d",&u.day,&u.mon,&u.year);
	printf("Enter Number :- "); 
	scanf("%u",&u.phone);
	fflush(stdin);
	printf("Enter Address :- ");
	scanf("%[^\n]s",u.adres);
	fwrite(&u,sizeof(struct user),1,fp);
	fclose(fp);
	fclose(fp2);
	printf("\n\nThank You.!!\n");
	printf("Press any key to continue.!!");
	
	getch();
	menupage();
}
void signIn()
{
		int i,j;
		char name[30],email[30];
		int num;
		
	system("cls");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                             Login Page                            ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	char chkmail[30],chkpass[30];
	printf("\n\n\n\tEnter Email :- ");
	scanf("%s",chkmail);
	printf("\n\tEnter Password :- ");
	scanf("%s",chkpass);
	FILE *fp;
	fp=fopen("UserDtl.txt","rb");
	if(fp==NULL)
	{
	     printf("Can't open file.\n");
	     exit(0);
	}
	int flag=0;
    while(fread(&u,sizeof(u),1,fp)>0 && flag==0)
    {
        if(!strcmp(u.email,chkmail) && !strcmp(u.pswd,chkpass))
        {      flag=1;
               strcpy(name,u.name);
               strcpy(email,u.email);
               num=u.phone;
    }}
    if(flag==1) {
        printf("\n\n\tLogin Successfully..!!\n");
        printf("\n\n\n\tHello %s",name);
        printf("\n\n\tWelcome, Now you can continue your shopping..!!\n");
        printf("\tPress Key to continue...!!!");
        strcat(userfile,email);
        strcat(userfile,".txt");
        strcpy(userId,email);
        getch();
        menu();
    } 
	else  {
        printf("\n\n\tIncorrect Email and Password.\n");
        printf("\n\n\tFirst sign Up then try to Login..!!");
        printf("\n\tPress Key to continue...!!!");
        getch();
    	menupage();
    }
}
void men()
{
	system("cls");
	int i,j;
	char file[20];
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                     1. Shirt                                      ######\n");
	printf("######                     2. T-Shirt                                    ######\n");
	printf("######                     3. Jeans                                      ######\n");
	printf("######                                                                   ######\n");
	printf("######                     4. Shoes                                      ######\n");
	printf("######                     5. Back                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######       Email - aman@gmail.com            Contact - 0123456789      ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	int ch;
	printf("Enter Your Choice.\n");
	scanf("%d",&ch);
	system("cls");
	printf("\t   ****    YOU HAVE TO LOGIN FIRST TO BUY ANYTHING.    ****\n");
	printf("-------------------------------------------------------------------------------");
	switch(ch)
	{
		    case 1:
				strcpy(file,"Dress\\Shirt.txt");
                break;
            case 2:
            	strcpy(file,"Dress\\Tshirt.txt");
                break;
            case 3:
            	strcpy(file,"Dress\\Jeans.txt");
                break;
            case 4:
            	strcpy(file,"Dress\\Shoes.txt");
			     break;
		    case 5:
		        menupage();
		        break;
		    default:
			    printf("Invalid Choice.\n");
			    break;
	}
	display_record(file);
	men();
}
void women()
{
	system("cls");
	int i,j;
	char file[20];
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                     1. Saree                                      ######\n");
	printf("######                     2. Lehanga                                    ######\n");
	printf("######                     3. Suit                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                     4. Shoes                                      ######\n");
	printf("######                     5. Back                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######       Email - aman@gmail.com            Contact - 0123456789      ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	int ch;
	printf("Enter Your Choice.\n");
	scanf("%d",&ch);
	system("cls");
	printf("\t   ****    YOU HAVE TO LOGIN FIRST TO BUY ANYTHING.    ****\n");
	printf("-------------------------------------------------------------------------------");
	switch(ch)
	{
		    case 1:
            	strcpy(file,"Dress\\Saree.txt");
                break;
            case 2:
                strcpy(file,"Dress\\Suit.txt");
                break;
            case 3:
            	strcpy(file,"Dress\\Lehanga.txt");
            	break;
		    case 4:
			    strcpy(file,"Dress\\Shoes.txt");
			    break;
		    case 5:
		        menupage();
		        break;
		    default:
			    printf("Invalid Choice.\n");
			    break;
	}
	display_record(file);
	women();
}
void mens()
{
	system("cls");
	int i,j;
	char file[20];
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                     1. Shirt                                      ######\n");
	printf("######                     2. T-Shirt                                    ######\n");
	printf("######                     3. Jeans                                      ######\n");
	printf("######                                                                   ######\n");
	printf("######                     4. Shoes                                      ######\n");
	printf("######                     5. Back                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######       Email - aman@gmail.com            Contact - 0123456789      ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	int ch;
	printf("Enter Your Choice.\n");
	scanf("%d",&ch);
	system("cls");
	printf("\t   ****    YOU HAVE TO LOGIN FIRST TO BUY ANYTHING.    ****\n");
	printf("-------------------------------------------------------------------------------");
	switch(ch)
	{
	        case 1:
            	strcpy(file,"Dress\\Shirt.txt");
                break;
            case 2:
            	strcpy(file,"Dress\\Tshirt.txt");
                break;
            case 3:
            	strcpy(file,"Dress\\Jeans.txt");
                break;
            case 4:
            	strcpy(file,"Dress\\Shoes.txt");
            	break;
		    case 5:
		        menupage();
		        break;
		    default:
			printf("Invalid Choice.\n");
			break;
	}
	buylist(file);
}
void womens()
{
	system("cls");
	int i,j;
	char file[20];
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                     1. Saree                                      ######\n");
	printf("######                     2. Lehanga                                    ######\n");
	printf("######                     3. Suit                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                     4. Shoes                                      ######\n");
	printf("######                     5. Back                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######       Email - aman@gmail.com            Contact - 0123456789      ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	int ch;
	printf("Enter Your Choice.\n");
	scanf("%d",&ch);
	system("cls");
	printf("\t   ****    YOU HAVE TO LOGIN FIRST TO BUY ANYTHING.    ****\n");
	printf("-------------------------------------------------------------------------------");
	switch(ch)
	{
		    case 1:
            	strcpy(file,"Dress\\Saree.txt");
                break;
            case 2:
                strcpy(file,"Dress\\Suit.txt");
                break;

            case 3:
            	strcpy(file,"Dress\\Lehanga.txt");
            	break;
		    case 4:
			    strcpy(file,"Dress\\Shoes.txt");
			    break;
		    case 5:
		        menupage();
		        break;
		    default:
			    printf("Invalid Choice.\n");
			    break;
	}
	buylist(file);
}
void kid()
{
	system("cls");
	int i,j;
	char file[20];
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                     1. Baby Clothing                              ######\n");
	printf("######                     2. Boy's Clothing                             ######\n");
	printf("######                     3. Girl's Clothing                            ######\n");
	printf("######                                                                   ######\n");
	printf("######                     4. Shoes                                      ######\n");
	printf("######                     5. Back                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######       Email - aman@gmail.com            Contact - 0123456789      ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	int ch;
	printf("Enter Your Choice.\n");
	scanf("%d",&ch);
	system("cls");
	printf("\t   ****    YOU HAVE TO LOGIN FIRST TO BUY ANYTHING.    ****\n");
	printf("-------------------------------------------------------------------------------");
	switch(ch)
	{
		    case 1:
            	strcpy(file,"Dress\\Kids.txt");
                break;
            case 2:
                strcpy(file,"Dress\\Kids.txt");
                break;
            case 3:
            	strcpy(file,"Dress\\Kids.txt");
            	break;
		    case 4:
			    strcpy(file,"Dress\\Shoes.txt");
			    break;
		    case 5:
		        menupage();
		        break;
		    default:
			    printf("Invalid Choice.\n");
			    break;
	}
	display_record(file);
	kid();
}
void kids()
{
	system("cls");
	int i,j;
	char file[20];
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                     1. Baby Clothing                              ######\n");
	printf("######                     2. Boy's Clothing                             ######\n");
	printf("######                     3. Girl's Clothing                            ######\n");
	printf("######                                                                   ######\n");
	printf("######                     4. Shoes                                      ######\n");
	printf("######                     5. Back                                       ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	printf("######       Email - aman@gmail.com            Contact - 0123456789      ######\n");
	printf("######                                                                   ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	int ch;
	printf("Enter Your Choice.\n");
	scanf("%d",&ch);
	system("cls");
	printf("\t   ****    YOU HAVE TO LOGIN FIRST TO BUY ANYTHING.    ****\n");
	printf("-------------------------------------------------------------------------------");
	switch(ch)
	{
	        case 1:
            	strcpy(file,"Dress\\Kids.txt");
                break;
            case 2:
            	strcpy(file,"Dress\\Kids.txt");
                break;
            case 3:
            	strcpy(file,"Dress\\Kids.txt");
                break;
            case 4:
            	strcpy(file,"Dress\\Shoes.txt");
            	break;
		    case 5:
		        menupage();
		        break;
		    default:
			printf("Invalid Choice.\n");
			break;
	}
	buylist(file);
}
void employee()
{
	int ch,n;
	char file[20];	
		int i,j;
		char name[30],email[30];
		int num;
		
	system("cls");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	printf("######                                                                   ######\n");
	printf("######                             Login Page                            ######\n");
	printf("######                                                                   ######\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<80;j++)
		printf("#");
		printf("\n");
	}
	char chkmail[30],chkpass[30];
	printf("\n\n\n\tEnter Email :- ");
	scanf("%s",chkmail);
	printf("\n\tEnter Password :- ");
	scanf("%s",chkpass);
	FILE *fp;
	fp=fopen("Employee.txt","rb");
	if(fp==NULL)
	{
	     printf("Can't open file.\n");
	     exit(0);
	}
	int flag=0;
    while(fread(&u,sizeof(u),1,fp)>0 && flag==0)
    {
        if(!strcmp(u.email,chkmail) && !strcmp(u.pswd,chkpass))
        {      flag=1;
               strcpy(name,u.name);
               strcpy(email,u.email);
               num=u.phone;
    }}
    fclose(fp);
    if(flag==0) {
        printf("\n\n\tIncorrect Email and Password.\n");
        printf("\n\n\tFirst sign Up then try to Login..!!");
        printf("\n\tPress Key to continue...!!!");
        getch();
    	menupage();
    } 
        system("cls");
     	printf("\tEnter Which section record want to access.\n");
        printf("\n\t\t1: Saree\n");
        printf("\t\t2: Suit\n");
        printf("\t\t3: Lehanga\n");
        printf("\t\t4: Shirt\n");
        printf("\t\t5: T shirt\n");
        printf("\t\t6: Jeans\n");
        printf("\t\t7: Shoes\n");
        printf("\t\t8: Kids\n");
        printf("\n\t\tEnter your choice : ");
        scanf("%d",&n);
        
        switch(n)
        {
            case 1:
            	strcpy(file,"Dress\\Saree.txt");
                break;
            case 2:
                strcpy(file,"Dress\\Suit.txt");
                break;
            case 3:
            	strcpy(file,"Dress\\Lehanga.txt");
                break;

            case 4:
            	strcpy(file,"Dress\\Shirt.txt");
                break;
            case 5:
            	strcpy(file,"Dress\\Tshirt.txt");
                break;
            case 6:
            	strcpy(file,"Dress\\Jeans.txt");
                break;
            case 7:
            	strcpy(file,"Dress\\Shoes.txt");
            	break;
            case 8:
            	strcpy(file,"Dress\\Kids.txt");
            	break;
            default:
                printf("\n\t\tWrong choice Entered");
        }
    
    while(ch!=6)
    {
    system("cls");
        printf("\t**** AVAILABLE FUNCTIONALITIES ****\n\n\n");
        printf("\t\t1: Insert record\n");
        printf("\t\t2: Display record\n");
        printf("\t\t3: Search record\n");
        printf("\t\t4: Delete record\n");
        printf("\t\t5: Update record\n");
        printf("\t\t6: Exit\n");
        printf("\n\t\tEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:system("cls");
                insert_record(file);
                break;
            case 2:system("cls");
            display_record(file);
                break;

            case 3:system("cls");
            search_record(file);
                break;

            case 4:system("cls");
            del_record(file);
                break;
            case 5:system("cls");
            update_record(file);
                break;
            case 6: menupage();
            default:
                printf("\n\t\tWrong choice Entered");
        }}
}
void  insert_record(char file[])
{
    FILE *fp;

    fp=fopen(file,"ab+");

    if(fp==NULL)
    {
        printf("\n\t\tError: Cannot Open the File!!!");
        exit(1);
    }
    printf("\n\n**** ENTER NEW CLOTH DATA ****\n\n");
	printf("\nEnter Cloth Id Number:- ");
    scanf("%d",&c.id);
    fflush(stdin);
    printf("\nEnter name of cloth:- ");
    gets(c.name);
    printf("\nEnter price of Cloth:- ");
    scanf("%d",&c.price);
    printf("\nEnter the discount:- ");
    scanf("%d",&c.discount);
    printf("\nEnter Buying price:- ");
    scanf("%d",&c.bprice);
    fwrite(&c,sizeof(c),1,fp);
    fclose(fp);
    printf("\n Updated Record !!\n");
    display_record(file);
    getch();

}

void display_record(char file[])
{
    FILE *fp;
    fp=fopen(file,"rb");

    if(fp==NULL)
    {
        printf("\n\t\tError : Cannot open the File !!!");
        return;
    }

    printf("\nID\tName\t\t\t\t\tPrice  Discount  Buy price\n\n");
    while(fread(&c,sizeof(c),1,fp)==1)
    {
        printf("%d\t%s\t\t%d  \t %d%% \t  %d\n",c.id,c.name,c.price,c.discount,c.bprice);
    }
    fclose(fp);
    getch();
}
void del_record(char file[])
{
    int id2,flag=0;
    FILE *fp,*ft;
    fp=fopen(file,"rb");
    ft=fopen("del.txt","ab+");
    if(fp==NULL)
    {
         printf("\n\t\tError: Cannot Open the File!!!");
        return;
    }
    printf("\n\t **** Previous Stored Data ****");
    display_record(file);
    printf("\n\n\tEnter Cloth Id Which You Want to Delete ");
    scanf("%d",&id2);
    while(fread(&c,sizeof(c),1,fp)>0 && flag==0)
    {
        if(c.id==id2)
        {
        flag=1;
        printf("\n\t\tRecord Deleted Sucessfully \n");
        }
        else
        {
        fwrite(&c,sizeof(c),1,ft);
        }
    
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!");
    }
     fclose(fp);
    fclose(ft);
    remove(file);
    rename("del.txt",file);
    printf("\n\t\t Updated Record !!\n");
    display_record(file);
    getch();
    
}
void search_record(char file[])
{
    int id2,flag=0;
    FILE *fp;
    fp=fopen(file,"rb");
    if(fp==NULL)
    {
        printf("\n\t\tError: Cannot Open the File!!!");
        return;
    }
    display_record(file);
    printf("\n\n\tEnter Cloth id Which You Want To Search: ");
    scanf("%d",&id2);
    while(fread(&c,sizeof(c),1,fp)>0 && flag==0)
    {
        if(c.id==id2)
        {
        flag=1;
        printf("\n\n\tSearch Sucessfull And Cloth Records Is as Follows: \n\n");
        printf("\nID\tName\tPrice\t\tDiscount \t\tBuy price\n\n");
        printf("%d\t%s\t\t%d  \t%d\t%d\n",c.id,c.name,c.price,c.discount,c.bprice);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
fclose(fp);
getch();
}
void update_record(char file[])
{
    int id2,flag=0;
    FILE *fp;
    fp=fopen(file,"rb+");
    if(fp==NULL)
    {
        printf("\n\t\tError: Cannot Open the File!!!");
        return;
    }
    display_record(file);
    printf("\n\n\tEnter id Number Whose Record You Want To Update: ");
    scanf("%d",&id2);
    printf("\n\t\t*** Previously Stored Record Of Given Id Number ***");

    while(fread(&c,sizeof(c),1,fp)>0 && flag==0)
    {
        if(c.id==id2)
        {
        flag=1;
        printf("\nID\tName\tPrice\t\tDiscount \t\tBuy price\n\n");
        printf("%d\t%s\t\t%d  \t%d\t%d\n",c.id,c.name,c.price,c.discount,c.bprice);
        printf("\n\t\t*** Now Enter the New Record ***\n\n");

        printf("\n\t\tUpdated Cloth Id Number: ");
        scanf("%d",&c.id);
        fflush(stdin);
        printf("\n\t\tUpdated Cloth Name:- ");
        gets(c.name);
        printf("\n\t\tUpdated Exact price:- ");
        scanf("%d",&c.price);
        printf("\n\t\tUpdated Discount:- ");
        scanf("%d",&c.discount);
        printf("\n\t\tUpdated Buying price:- ");
        scanf("%d",&c.bprice);
        fseek(fp,sizeof(c),SEEK_CUR);
        fwrite(&c,sizeof(c),1,fp);
        printf("\n\n\t\tRecord Updated Successfully Check The Display Section!!\n\t\t");
        }
    }
    if(flag==0)
    {
        printf("\n\t\tError : Something went wrong!!!");
    }
fclose(fp);
getch();
}
void myCart()
{
	int ch;
	int i,j,total=0;
	system("cls");
    printf("#####                          MY CART                              ######\n");
    printf("--------------------------------------------------------------------------\n");
	FILE *fp;
    fp=fopen(userfile,"rb");
    
    if(fp==NULL)
    {
        printf("\n\t\t Sorry, You have no item in your cart..\n");
        printf("\n\t\t First you have to buy some item.\n");
        printf("\n\t\t Please enter any key to continue....!!!\n");
        
        getch();
        menu();
        return;
    }

    printf("\nID.No\tName\t\t\t\t\tPrice\n\n");
    while(fread(&c,sizeof(c),1,fp)==1)
    {
        printf("%d\t%s\t\t %d\n",c.id,c.name,c.bprice);
        total+=c.bprice;
    }
    printf("----------------------------------------------------\n");
    printf("\n\n\t\t\t\t Total Price :- %d\n\n",total);
    printf("----------------------------------------------------\n");
    fclose(fp);
    printf("###############################################################################\n");
    printf("######                                                                   ######\n");
	printf("######                   1. PlaceOrder                                   ######\n");
	printf("######                   2. Delete Item                                  ######\n");
	printf("######                   3. Back                                         ######\n");
	printf("######                                                                   ######\n");
    printf("###############################################################################\n");
    printf("\nEnter Your Choice :- ");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:
    		placeorder(total);
    		break;
    	case 2:
    		del_record(userfile);
    		menu();
    		break;
    	case 3:
    		menu();
    		break;
    	default:
    		printf("Invalid Choice.\n");
    		getch();
    		menu();
    		break;
	}
    getch();
}

void buylist(char file[])
{
	int i,j,id2,flag=0;
	system("cls");
    FILE *fp,*fc;
    fp=fopen(file,"rb");
    fc=fopen(userfile,"ab+");
    if(fp==NULL || fc==NULL)
    {
        printf("\n\t\tError : Cannot open the File !!!");
        return;
    }
    display_record(file);
     printf("\n\n\tEnter Cloth id to add in Cart : ");
    scanf("%d",&id2);
    while(fread(&c,sizeof(c),1,fp)>0 && flag==0)
    {
        if(c.id==id2)
        {
        flag=1;
        printf("\nID\tName\tPrice\t\tDiscount \t\tBuy price\n\n");
        printf("%d\t%s\t\t%d  \t%d\t%d\n",c.id,c.name,c.price,c.discount,c.bprice);
        fwrite(&c,sizeof(c),1,fc);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    fclose(fc);
    myCart();
    getch();
	menu();
}
void placeorder(int total)
{
	
	system("cls");
	FILE *fp;
	fp=fopen("UserDtl.txt","rb");
	if(fp==NULL)
	{
	     printf("Can't open file.\n");
	     exit(0);
	}
	int flag=0;
    while(fread(&u,sizeof(u),1,fp)>0 && flag==0)
    {
        if(!strcmp(u.email,userId))
        {      flag=1;
               printf("Congrutulations, Mr. %s",u.name);
               printf("\nYour Order Details\n");
               printf("\nEmail - %s",u.email);
               printf("\nphone No. - %u",u.phone);
               printf("\nAddress - %s",u.adres);
               printf("\nTotal Amount - %d",total);
    }}
    fclose(fp);
	printf("\n\n\n\n\n\n\t\t\tOUT FOR\n\n");
	printf("\t\t   o_______________}o{\n");
    printf("\t\t    |              |   \\\n");
    printf("\t\t    |   DELIVERY   |____\\_____\n");
    printf("\t\t    | _____        |    |_o__ |\n");
    printf("\t\t    [/  ___ \\      |   / ___ \\|\n");
    printf("\t\t    []_/.-.\\_\\_____|__/_/.-.\\_[]\n");
    printf("\t\t       |(O)|            |(O)|\n");
    printf("\t\t        '-'              '-'\n");
    printf("===============================================================================");
    getch();
    exit(0);
}