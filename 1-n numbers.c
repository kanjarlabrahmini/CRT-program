/*print 1 to n nos using while*/

#include<stdio.h>
main()
{
	int a,n;
	printf("\n enter a value");
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
		printf("\n%d",a);
		a++;
	}
}
