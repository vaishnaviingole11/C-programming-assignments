void main()
{
	int a;
	printf("enter the no");
	scanf("%d",&a);
	leapyear(a);
}
void leapyear(a)
{
	
	int year=2028;
	if (year%4==0&& year%100!=0||year%400==year)
	printf("year is leap");
	else
	printf("not leap year");

}