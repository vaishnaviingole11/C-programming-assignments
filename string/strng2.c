void main()
{
	char str1[20],str2[15];
	printf(" enter string 1");
	printf(" enter string 2");
	scanf("%s%s",str1,str2);
	printf("string=%s,string2=%s",str1,str2);
	
	int i=0;
	 while(str1[i]!= '\0',str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        
        i++;
    }

    if(i == 1)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}
