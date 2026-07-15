#include<stdio.h>
#include<string.h>
char*mystrchr(char*str[], char ch);

void main()
{
	char str[]="happy day";
	char ch;
    printf("Enter character to search ");
    scanf("%c", &ch);
	char*x=mystrchr(str,'d');
	if(x!='\0')
	printf("%s character found",x);
	else
	printf(" character not found");
}
char*mystrchr(char*str[], char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		return &str[i];
	}
	i++;
	
}