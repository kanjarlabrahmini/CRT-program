/* prime no method 2*/
#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("\nenter a number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==0)
	printf("\n prime nos");
	else
	printf("\n not a prime num");
	
}
