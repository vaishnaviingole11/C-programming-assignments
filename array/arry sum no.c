void main()
{
	int*arr,i;
		int size=5;
		int sum=0;
	int *arr = (int *)malloc(size * sizeof(int));
	printf("enter no");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
     	for(int i=0;i<5;i++)
     	sum=sum+arr[i];
    
   	printf(" sum=%d",sum);
}