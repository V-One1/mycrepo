#include<stdio.h>
#include"sum.h"

int main()
{
	int a,b,c,d;
	printf("Enter a b: ");
	scanf("%d %d",&a,&b);
	c = sum(a,b);
	d = a - b;
	printf("c is : %d\n",c);
	printf("d is : %d\n",d);
	return 0;
}
	
