void main()
{
	int a;
	printf("enter the letter");
	scanf("%d",a);
	uppercase(a);
}
void uppercase(a)
{
	char ch='b';
	if(ch>='A'&& ch<='Z')
	printf("the letter is uppercase");
	else
	if(ch>='a'&& ch<='z')
	printf("the letter is lowercase");
}