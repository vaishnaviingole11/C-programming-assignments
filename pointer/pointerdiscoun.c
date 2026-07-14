#include<stdio.h>
double totalsalary();
void main()
{
	 char ch;
	 	 printf("enter  character");
	 	 scanf("%c",&ch);
	 	 double price;
	 	 totalslary(&ch);
	 	 
	 printf("enter price");
	 fflush(stdin);
	 scanf("%lf",&price);
	 double price=totalsalary();
	double fprice,discount=0;
	 }
double totalsalary(char*ch)
	 
	 
{
	
	
	
	char ch;
	
	if(ch)
	{
		if (price>500)
		{
		discount=price*0.20;
		fprice=price-discount;
    	}
	    else
	    {
		fprice=price-price*0.10;
    	}
    }
	else
	{
		if(price>600)
		fprice=price-price*0.15;
		else
		fprice=price;
		
	}
	
	printf("final price over price %lf is %lf",price,fprice);
	
	
	}


}
