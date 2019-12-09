/* 1- n even nos*/

#include<stdio.h>
main()
{
	int a,n;
	printf("\n enter a value");
	scanf("%d",&n);
	a=2;
	while(a<=n)
	{
		printf("\n%d",a);
		a+=2;
	}
}
