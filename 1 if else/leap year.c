void main()
{
	int year=2028;
	if (year%4==0&& year%100!=0||year%400==year)
	printf("year is leap");
	else
	printf("not leap year");
}