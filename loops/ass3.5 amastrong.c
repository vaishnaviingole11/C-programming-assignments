void main()
{
	int no=153;
	int temp=no,rem,sum=0;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(no==sum)
	{
		printf("%d no is amastrong",no);
	}
	else
		printf("%d no is not amastrong",no);
	
}