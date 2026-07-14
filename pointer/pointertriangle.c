void main()
{
	int a,b,c;
	printf("enter 3 sides of triangle");
	scanf("%d %d%d",&a,&b,&c);
	triangleis(&a,&b,&c);
}

void triangleis( int*a,int*b,int*c)
{

	

	if(*a==*b && *b==*c)
	printf("triangle is equilateral");
	{
		if(*a==*b ||*b==*c||*a==*c)
		printf("isoscalen");
	
		else
			printf("scalen");
			
		
	}
}