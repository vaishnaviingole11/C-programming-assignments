
void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	amastrong(no);
}
void amastrong(no)
{
	
	int temp=no,rem,sum=0;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(no==sum)
	{
		printf("  amastrong");
	}
	else
		printf("not amastrong");
	
}