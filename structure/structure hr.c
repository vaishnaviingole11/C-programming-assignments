#include<stdio.h>
	struct hr
{
	int id;
	char name[20];
	double salary;
	double commision;
	
};
void displayhr(struct hr h );
struct hr storehr();
void main()
{
	struct hr h1,h2,h3;
	printf("enter id,name,salary,commision of h1");
	h1=storehr();
	
	printf("enter id,name,salary,commision of h2");
	h2=storehr();
	
	printf("enter id,name,salary,commision of h3");
	h3=storehr();
	
	displayhr(h1);
	displayhr(h2);
	displayhr(h3);
	
}
struct hr storehr()
{
	struct hr temp;
	scanf("%d",&temp.id);
	scanf("%s",&temp.name);
	scanf("%lf",&temp.salary);
	scanf("%lf",&temp.commision);
	return temp;
}
 void displayhr(struct hr h)
{
	printf("id:=%d,name:=%s,salary=%lf,commission=%lf",h.id,h.name,h.salary,h.commision);
	
}
