void main()
{
	int n,i;
	printf("enter the no");
	scanf("%d%d",&n,&i);
	numberless(n,i);
}
void numberless(int n,int i)
{

	while(i<=10)
	{
	printf("%d ",n*i);
	i++;
	}
}
