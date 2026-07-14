#include<stdio.h>
void main()
{
	int a=10,b=20;
	printf("before swap %d%d",a,b);
	swap( &a,&b);
	printf("after swap %d%d",a,b);
	}
void swap(int*x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;	
}