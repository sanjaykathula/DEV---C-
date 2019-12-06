#include<stdio.h>
main()
{
	int m,p,c,tot;
	float avg;
	printf("\n enter the marks in maths,phy,chem");
	scanf("%d%d%d",&m,&p,&c);
	tot=m+p+c;
	avg=(float)tot/3;
	printf("\n Total marks %d",tot);
	printf("\n Average marks %f",avg);
}
