#include<stdio.h>
main()
{
	int n;
	printf("\n enter a value :");
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
	printf("\n n is divisible");
	else
	printf("\n n is not divisible");
}
