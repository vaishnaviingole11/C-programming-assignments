firstlast(no);
void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	firstlast(no);
}
firstlast(no)
{
	
	int first,last;
	last=no%10;
	while(no>=10)
	{
	
	no=no/10;
    }
   first=no;
   printf("sum=%d",first+last);
   return no>=10;


	
}