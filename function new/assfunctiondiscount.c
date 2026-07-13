void main()
{
	discount();
}
void discount()
{
	char ch='y';
	printf("enter value");
	scanf("%c",ch);
	double price=1000;
	double fprice;
	double discount=0;
	
	if(ch=='y')
	{
		if (price>500)
		discount=price*0.20;
		fprice=price-discount;
	}
	else
	{
		if(price>600)
		fprice=price;
	}
	printf("final price =%lf");
	
	
	}