#include<stdio.h>
double totalsalary();
void main()
{
	
	double price=totalsalary();
	double fprice,discount=0;
	
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
	
double totalsalary()
	 {
	 char ch;
	 	 printf("enter  character");
	 	 scanf("%c",&ch);
	 	 double price;
	 	 
	 printf("enter price");
	 fflush(stdin);
	 scanf("%lf",&price);
	 return price;
}
