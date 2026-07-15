void main()
{
	char str[50];
	int i=0;
	printf("enter no:");
	scanf("%s",&str);
	while(str[i]!='\0')
	{
		i++;
	}
	for(int i=i-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}