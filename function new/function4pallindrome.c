 pallindrome( int no);
void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	pallindrome(no);
}
 int pallindrome( int no)
{

	int temp=no,rev=0,rem;
	while(temp>0)
	{
		rem=temp%10;
		rev = rev * 10 + rem;
        temp = temp / 10;
	}
	if(rev==no)
	printf("pallindrome no");
	else
		printf(" not pallindrome no");
		return rev==no; 
	
}