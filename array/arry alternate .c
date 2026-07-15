void main()
{
	int arr[6],temp;
	printf("enter element");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
    for(int i=0;i<6;i++)
    {
	printf("%d",arr[i]);
	}
	for(int i=0;i<6;i=i+2)

	{
		printf(" alternate no is =%d",arr[i]);
	}
}
	