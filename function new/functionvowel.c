void main()
{
	int ch;
	printf("enter charector");
	scanf("%c",&ch);
	vowelorconstant(ch);
}
void vowelorconstant(ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='b')
	
	{
	printf(" vowel %c",ch);
    }
	else
	{
	printf("constant%c",ch);
    }
	
	
}