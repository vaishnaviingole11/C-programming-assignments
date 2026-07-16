#include<stdio.h>
	struct salesmanager
{
	int id;
	char name[20];
	double salary;
	double commision;
	int incentive;
	int target;
	
};
void displayhr(struct salesmanager s );
struct salesmanager storesalesmanager();
void main()
{
	struct salesmanager s1,s2,s3;
	printf("enter id,name,salary,incentive,target of s1");
	s1=storesalesmanager();
	
	printf("enter id,name,salary,incentive,target of s2");
	s2=storesalesmanager();
	
	printf("enter id,name,salary,incentive,target of s3");
	s3=storesalesmanager();
	
	displaysalesmanager(s1);
	displaysalesmanager(s2);
	displaysalesmanager(s3);
	
}
struct salesmanager storesalesmanager()
{
	struct salesmanager temp;
	scanf("%d",&temp.id);
	scanf("%s",&temp.name);
	scanf("%lf",&temp.salary);
	scanf("%d",&temp.incentive);
	scanf("%d",&temp.target);
	return temp;
}
 void displaysalesmanager(struct salesmanager s)
{
	printf(" salesmanager id:=%d,name:=%s,salary=%lf,incentive=%d,target=%d",s.id,s.name,s.salary,s.incentive,s.target);
	
}
