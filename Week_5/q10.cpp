//Student detail structure access by pointer varaible.
#include <stdio.h>
int main() {
  int i,n;
  struct student {
    int roll;
    char name[20];
    int sec;
    int  subsec;
    char email[30];
  };
   struct student std[96];
  
   struct student *ptr = NULL;
   ptr = std;
    printf("Enter number of students in batch.\n");
	scanf("%d",&n);
    for (i = 0; i<n; i++) {
    printf("Enter detail of student %d\n", (i + 1));
    printf("Enter Roll no: ");
    scanf("%d", &ptr->roll);
    printf("Enter Name: ");
    scanf("%s",ptr->name);
    printf("Enter Section ");
    scanf("%d", &ptr->sec);
    printf("Enter subsec: ");
    scanf("%d", &ptr->subsec);
    printf("Enter Email: ");
    scanf("%s", ptr->email);
    ptr++;
  }
    ptr = std;
  
  for (i = 0; i < n; i++) {
    printf("\nDetail of student %d\n", (i + 1));
    printf("\nResult via ptr\n");
    printf("Roll no: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Sec: %d\n", ptr->sec);
    printf("Subsec: %d\n", ptr->subsec);
    printf("Email: %s\n", ptr->email);
    ptr++;
  }
  return 0;
}
