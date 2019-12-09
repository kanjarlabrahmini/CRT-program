/* super market bill using infinite loop*/

#include<stdio.h>
main()
{
	int pid,qty,count=0;
	char pname[20],ch='y';
	float price, amount,tamount=0;
	while(ch=='y' || ch=='Y')
	{
		printf("\n enter product id:");
		scanf("%d",&pid);
	    printf("\n enter product name:");
		scanf("%s",&pname);
        printf("\n enter amount:");
		scanf("%f",&amount);
        printf("\n quantity:");
		scanf("%d",&qty);
		amount=qty*price;
		tamount+=amount;
		count++;
		printf("\n do u wish to continue?(y/n)");
		ch=getche();
		//fflush(stdin);
		//scanf("%c",&ch);
		
	}
	printf("\n number of items purchased: %d", count);
	printf("\n total amount : %f",tamount);
	
	
	
	
}

		
	
