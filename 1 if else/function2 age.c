 int age();
void main()
{
	if(age())
	printf("elgiable");
	else
	printf("not eligiable");
}
int age()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	return age>=18;
}