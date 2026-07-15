#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100]="happy";
	char str2[200]="life";
	char str3[400]="happylife";
	//length
	 
	printf("length is %zu\n",strlen(str1));
	printf("length is %zu\n",strlen(str2));
	printf("length is %zu\n",strlen(str3));
	//copy
	strcpy(str3, str1);
    printf("2. strcpy = %s\n", str3);

	
}