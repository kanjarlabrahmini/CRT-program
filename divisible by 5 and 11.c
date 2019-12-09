/* divisible by 5 and 11*/


#include<stdio.h>
main()
{
	int a;
	printf("enetr a number");
	scanf("\n%d",&a);
	if(a%5==0 && a%11==0)
	 printf("the number is divisible by 5 and 11");
	else
	 printf("the number is not divisible by 5 and 11");
}

