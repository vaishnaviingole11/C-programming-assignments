int evenodd();
void main()
{
    if(evenodd())
    printf(" even no");
    
	else 
	printf(" odd");
    
}
int evenodd()
{
	int no;
	printf("enter number");
	scanf("%d",&no);
	return no%2==0;
	

	
}
