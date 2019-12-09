/* triangle using the angles*/
#include<stdio.h>
main()
{
	int a, b,c;
	printf("\n enter the angles in the triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	printf("\n it is a triangle");
	else
	printf("\n not a triangle");
	
}

