void main()
{
	twono();
}
void twono()

	int i;
	printf("enter no");
	scanf("%d",&i);
	if(i%3==0 && i%5==0)
	printf("%d  is divisable by both ",i);
	{
		if(i % 3==0)
		printf("%d is divisiblr by 3 ",i);
		
	}
	if(i%5==0)
	printf("%d is divisible by 5",i);
	else
	printf("divisible by none",i);
	
	
}