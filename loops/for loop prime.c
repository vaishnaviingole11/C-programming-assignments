void main()
{
	int no,i;
	printf("enter no:");
	scanf("%d",&no);

	for( i=2; no>i; i++)
	{
		if(no%i==0)
			break;
	}
	if(no==i)
		printf(" no is prime");
	else
		printf(" no is not prime");
}