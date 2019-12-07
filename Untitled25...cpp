#include<stdio.h>
main()
{
	int a,n;
	printf("\n enter n value :");
	scanf("%d",&n);
	while(n>=2)
	{
		printf("\n%d",n);
		n-=2;
	}
}
