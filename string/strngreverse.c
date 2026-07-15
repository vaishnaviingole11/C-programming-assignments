#include<stdio.h>
#include<string.h>
void main()
{
	int i,j ,str;
	int len=strlen(str);
	j=len-1;
	for(i=0;i<len/2;i++,j--)
	{
		char temp=str [i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s"str);
}