
void main()
{
	int no,flag=0;
	printf("enter no");
	scanf("%d",&no);
	primeornot(no);
	
	
	if (flag==0)
	    printf(" no  prime ");
	    if (flag==1)
		printf("not prime");
}
void primeornot(int no)
{
	

	int i=2,flag=0;
	while(i<no)
	{
		if(no%i==0)
		flag=1;
		break;
		{
		}
	
	}
	i++;
}
	


	