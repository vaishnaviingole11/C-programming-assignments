void main()
{
	int arr[5]={10,20};
	int*ptr;
	ptr=arr;
	for(int i=0;i<5;i++)
	{
		printf("%d",*(ptr+1));
	}
}