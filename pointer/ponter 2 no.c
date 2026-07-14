void twono();
void main()
{
	int i;
	printf("enter no");
	scanf("%d",&i);
	twono(&i);
}
void twono(int*i)
{

	if(*i%3==0 && *i%5==0)
	printf("%d  is divisable by both ");
	{
		if(*i % 3==0)
		printf("%d is divisiblr by 3 ");
		
	}
	if(*i%5==0)
	printf("%d is divisible by 5");
	else
	printf("divisible by none");
	
	
}