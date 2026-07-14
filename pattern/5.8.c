#include<stdio.h>
void main()
{
	int n=4;
	int row,col;
	for(int row=1;row<=n;row++)
	{
		for(int col=1;col<=1;col++)
		printf("*");
	{
		printf("\n");
	}
	
	  for( int row=n-1;row>=1;row--)
	{
		for(int col=1;col=row;col++)
		    printf("*");
		{
			printf("\n");	
		}
	}
}