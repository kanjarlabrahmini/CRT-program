/*check if it is a vowel or consonant*/
#include<stdio.h>
main()
{
	char ch;
	printf("\n enter the alphabet");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("\n vowel");break;
		default:printf("\n consonant");break;
	}
}
