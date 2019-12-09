/* perfect no*/
#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("\nenter a number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	printf("\n prefect number");
	else
	printf("\n not a perfect num");
	
}

