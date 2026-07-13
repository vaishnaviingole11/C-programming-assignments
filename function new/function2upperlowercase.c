char upperlowercase();
void main()
{
	if( upperlowercase())
	printf("the letter is uppercase");
	else
	
	printf("the letter is lowercase");
	
}
char upperlowercase()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	return ch>='A'&& ch<='Z';

}