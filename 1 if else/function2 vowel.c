char definevowelconstant();
void main()
{
	
	if(definevowelconstant())
	printf("vowel");
	else
	printf("constant");
	
}
 char definevowelconstant()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='b';
	
	
}
	
	