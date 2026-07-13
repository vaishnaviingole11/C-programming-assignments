int factorial(int no);
void main()
{
	int no,fact;
	printf("enter no");
	scanf("%d",&no);
	int factorial(no);
	fact=factorial(no);
}
int factorial(int no)
{

	int fact=1;
	int i=1;
while(i<=no)
{
	fact=fact*i;
	i++;
}
	{
		printf(" factorial is %d ",fact);
		return fact;
	}
}