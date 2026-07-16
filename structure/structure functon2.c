#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};
 struct student storestudent();
void displaystudent(struct student s);
void main()
{
	struct student s1,s2,s3;
	printf("enter rollno,name ,marks of student 1");
	s1=storestudent();
	
	printf("enter rollno,name ,marks of student 2");
	s2=storestudent();
	
	
	printf("enter rollno,name ,marks of student 3");
	s3=storestudent();
		
	displaystudent(s1);
	displaystudent(s2);
	displaystudent(s3);
}

 struct student storestudent()
{
	struct student temp;
	scanf("%d",&temp.rollno);
	scanf("%s",&temp.name);
	scanf("%d",&temp.marks);
	return temp;
}
 void displaystudent(struct student s)
{
	printf("student :rollno=%d name=%s marks=%d\n",s.rollno,s.name,s.marks);
}