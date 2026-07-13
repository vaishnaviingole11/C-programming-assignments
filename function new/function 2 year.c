int year();
void main()
{
	if ( year())
	printf("year is leap");
	else
	printf("not leap year");
}
int year()
{
	int year;
	printf("enter year");
	scanf("%d",&year);
	return year%4==0&& year%100!=0||year%400==year;
}