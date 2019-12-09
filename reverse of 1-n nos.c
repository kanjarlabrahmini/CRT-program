/*reverse of 1-n*/

#include<stdio.h>
main()
{
	int n;

	printf("\n enter a number");
	scanf("%d", &n);
	while(n>=1)
	{
		printf("\n%d",n);
		n--;
	}
}

