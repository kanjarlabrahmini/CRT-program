/* take input as a number and print o/p as no. of digits*/

{
	int a;
	printf("\n enter the num");
	scanf("%d",&a);
	if(a>=0 && a<10)
	printf("\n single digit");
	else if(a>=10 && a<100)
	printf("\n2 digit");
	else if(a>=100 && a<1000)
	printf("\n 3 digit");
	else if(a>=1000 && a<10000)
	printf("\n 4 digit");
	else
	printf("\n more than 4  digit")
}




