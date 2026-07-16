#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};
 void main()
{
	struct student s1,s2,s3;
	//student 1
	printf("enter roll no student 1");
	scanf("%d",&s1.rollno);
	
		printf("enter name student 1 ");
		scanf("%s",&s1.name);
			printf("enter marks");
			scanf("%f",&s1.marks);
			
			printf("\n studet detailed\n");
			printf("rollno=%d\n",s1.rollno);
			printf("name=%s\n",s1.name);
			printf("marks=%f\n",s1.marks);
			
			
			//student 2
			printf("enter roll no student 2");
	scanf("%d",&s2.rollno);
		printf("enter name ");
		scanf("%s",&s2.name);
			printf("enter marks");
			scanf("%f",&s2.marks);
			
			printf("\n studet detailed\n");
			printf("rollno=%d\n",s2.rollno);
			printf("name=%s\n",s2.name);
			printf("marks=%f\n",s2.marks); 
			//stdent 3
			printf("enter roll no student 3");
	scanf("%d",&s3.rollno);
		printf("enter name ");
		scanf("%s",&s3.name);
			printf("enter marks");
			scanf("%f",&s3.marks);
			
			printf("\n studet detailed\n");
			printf("rollno=%d\n",s3.rollno);
			printf("name=%s\n",s3.name);
			printf("marks=%f\n",s3.marks);
	
}