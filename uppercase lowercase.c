/* upeer case and lower case*/
#include<stdio.h>
main()
{
	char ch;
	printf("\n enter a character:");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	 printf("\n upper case");
	if(ch>=97 && ch<=122)
 	 printf("\n lower case");
	if(ch>=48 && ch<=57)
	 printf("\n its a digit");
}
