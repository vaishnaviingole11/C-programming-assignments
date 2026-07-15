void main()
{
	char str1[100],str2[200];
	int i=0;
	printf("enter string1andstring2");
	scanf("%s%s",str1,str2);
	while(str1[i]==str2[i]&&str1[i]!='\0'&&str2[i]!='\0')
	{
		printf("%d",i);

	i++;
	}
    if(str1[i] == str2[i])
    {
        printf("Strings are equal");
    }
    else if(str1[i] > str2[i])
    {
        printf("String 1 is greater");
    }
    else
    {
        printf("String 2 is greater");
    }
}


	

	
    
    
	


