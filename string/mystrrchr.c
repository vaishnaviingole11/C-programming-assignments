#include<stdio.h>
#include<stdling.h>
char*mystrrchr(str[], ch)
void main()
{
	char str[]="firstbit";
	char ch;
	printf("enter string");
	scanf("%c", &ch);
	char*x=mystrrchr(str,'i');
	if(x !='\0')
        printf("character found %s", x);
    else
        printf("Character not found");
}
char*mystrrchr(char str[], char ch)
{
    int i= 0;
    char *last='\0';

    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            last=&str[i];
        }
