#include<stdio.h>
#include"sum.h"

int main()
{
	int a,b,c;
	printf("Enter a b: ");
	scanf("%d %d",&a,&b);
	c = sum(a,b);
	printf("c is : %d\n",c);
	return 0;
}
	
