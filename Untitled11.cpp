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
		case 'a':printf("\n vowel :");break;
    	case 'e':printf("\n vowel :");break;
		case 'i':printf("\n vowel :");break;
		case 'o':printf("\n vowel :");break;
		case 'u':printf("\n vowel :");break;
		default:printf("\n is consonant ");                
	}
}
