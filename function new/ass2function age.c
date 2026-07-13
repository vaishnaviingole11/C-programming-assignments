#include<stdio.h>
void main()
{

	age();
}
void age()
{
		int age;
	printf("enter age");
	fflush(stdin);
		scanf("%d",&age);
	if( age<12)
	printf(" is child");
	{
		if(age>=12&& age<=19)
		printf("teeneger");
	}
			{
				if ( age>=20 && age<=59)
				printf(" adult");
				{
					if(age>=60)
					printf(" senior");
				}
			}
    
}