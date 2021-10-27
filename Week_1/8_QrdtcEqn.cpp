#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float root1,root2,real,imag,d;
	printf("Enter the values of a,b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
	{
		printf("Not a quardratic Equation.\n");
	}
	else
	{
		d=b*b-4.0*a*c;
		if(d==0)
		{
			root1=root2=-b/(2*a);
			printf("Two equal and real roots:- %.2f & %.2f", root1,root2);
		}
		else if(d>0)
		{
			root1=(-b+sqrt(d))/(2*a);
			root2=(-b-sqrt(d))/(2*a);
			printf("Two distinct & real roots : %.2f & %.2f",root1,root2);
		}
		else if(d<0)
		{
			printf("Imaginary Roots\n");
			real= -b/(2.0*a);
			imag=sqrt(-d)/(2*a);
			printf("Two distinct complex roots exists: root1 = %.2f + i%.2f and %.2f - i%.2f",real,imag,real,imag);
		}
	}
	return 0;
}
