/* prime no*/
#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("\nenter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("\n prime nos");
	else
	printf("\n not a prime num");
	
}

