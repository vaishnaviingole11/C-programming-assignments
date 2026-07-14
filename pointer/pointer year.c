int year(int*year);
void main()
{
	int y;
	printf("enter year");
	scanf("%d",&y);
	year(&y);
	
}
int year(int*y)
{

	if( *y%4==0&& *y%100!=0||*y%400==*y)2005
	{

	printf("year is leap");
	}
	else
	{
	
	printf("not leap year");
}
}