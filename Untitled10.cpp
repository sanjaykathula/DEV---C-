#include<stdio.h>
main()
{
	int ch;
	printf("\n enter a alpha");
	scanf("%c",&ch);
	printf("\n 1.Vowel \n 2.Consonant");
	printf("\n enter your choice");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':printf("\n vowel :%d",a);break;
    	case 'e':printf("\n vowel :%d",e);break;
		case 'i':printf("\n vowel :%d",i);break;
		case 'o':printf("\n vowel :%d",o);break;
		case 'u':printf("\n vowel :%d",u);break;
		default:printf("\n is invalid ");                
	}
}
