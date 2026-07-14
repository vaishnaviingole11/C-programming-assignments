void greaterless(marks);
void main()
{
	int marks;
    printf("enter marks");
    scanf("%d",&marks);
    greaterless(&marks);
    }
 void greaterless(int*marks)
 {
	if(*marks>=75)
	printf("A+");
	else
	{
	
	if(*marks>=55)
	{
		printf("B+");
	}
	else
	if(*marks>=45)
	{
		printf("c+");
	}
}
}
