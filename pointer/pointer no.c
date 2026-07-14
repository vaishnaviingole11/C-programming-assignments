void main()
{

	int a,b,c;
	printf("enter 3 no");
	scanf("%d%d%d",&a,&b,&c);
	greatest(&a,&b,&c);
	}
	
void greatest(int *a,	int*b,	int*c)
{
	if(*a>=*b && *a>=*c)
	
	
	printf( "a is greater");
    
	if(*b>=*c && *c>=*a)
	{
	
	printf(" b is greater");
}
	else
	if(*c>=*b&& *c>=*a)
	printf("c is greater");
	}
