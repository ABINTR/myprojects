// To find the cube using function

#include<stdio.h>

int cube(int); 
void main()
{
	int a,b;
	printf("Enter the number to find cube\n");
	scanf("%d",&a);
	b=cube(a);
	printf("The cube of the no. is %d\n",b);

}

int cube(int x)
{
	int y;
	y=x*x*x;
	return(y);
}
