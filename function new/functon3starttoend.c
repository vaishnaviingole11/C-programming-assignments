void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	starttoend(no);
	
}
void starttoend(no)
{
	int start=1,end =5;
	int sum=0;
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	
	
	printf("%d",sum);
    
	
}