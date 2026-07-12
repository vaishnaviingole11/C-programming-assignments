void main()
{
	int n=121;
	int temp=n,rev=0,rem;
	while(temp>0)
	{
		rem=temp%10;
		rev = rev * 10 + rem;
        temp = temp / 10;
	}
	if(rev==n)
	printf(" %dpallindrome no",n);
	else
		printf(" not pallindrome no");
	
}