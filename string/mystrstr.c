#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="happy day";
	char str2[]="day";
	char*c=mystrstr(str1,str2);

    if(c !=NULL)
    printf("%s Substring found", c);
    else
    printf("Substring not found");	
}
char*c=mystrstr(char str1[],char str2[]);
{
    int i, j;
     int i=0;
    while(str[i] != '\0')
    {
        j = 0;
        while(str1[i + j] == str2[j] && str2[j] != '\0',j++)
        
        if(str2[j] == '\0')
        {
            return &str1[i];
        }

        i++;
    }
