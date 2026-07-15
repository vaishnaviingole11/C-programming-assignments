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
	int max=arr[0];
		for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("\n no is greater %d",max);
    int min=arr[0];
    for(int i=0;i<5;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	printf("\ni no is less %d ",min);	
}
	
   