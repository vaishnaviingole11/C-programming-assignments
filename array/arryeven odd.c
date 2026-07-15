void main()
{
	int arr[5];
	printf("enter no");
	
		for(int i=0;i<5;i++)
	{
		
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		
		printf("%d ",arr[i]);
	}
	for(int i=0;i<5;i++)
	if(arr[i]%2==0)
	{
		printf("even %d",arr[i]);
		
	}
	else
		if(arr[i]%2==1)
	
		printf("odd %d",arr[i]);

	
}