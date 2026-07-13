int divisibleby();
void main()
{
	int i;
	i=divisibleby();
	if(i%3==0 && i%5==0)
	printf("%d  is divisable by both ",i);
	{
		if(i % 3==0)
		printf(" is divisiblr by 3 ");
		
	}
	if(i%5==0)
	printf(" is divisible by 5");
	else
	printf("divisible by none");
	
}
int divisibleby()
{
	int i;
	printf("enter no");
	scanf("%d",&i);
	return i;
}