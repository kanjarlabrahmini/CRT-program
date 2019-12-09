/*print count of no of digits*/

#include<stdio.h>
main()
{
	int n,r,count=0;
	printf("\n enter a value");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
    	n=n/10;
		count++;
	}
	printf("\n no of digits: %d",count);
}
