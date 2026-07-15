void main()
{
	char str[10];
	int i=0;
	 int len=0;
	printf("enter the string");
	scanf("%s",str);
	
	while(str[i]!=0)
	{
		len++;
		i++;
	}
	printf("revere the string");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}