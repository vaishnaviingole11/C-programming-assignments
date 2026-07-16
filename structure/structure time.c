#include<stdio.h>
struct time
{
	int hour;
	int min;
	int sec;
	
};
void main()
{
	struct time s;
		printf("enter hour");
		scanf("%d",& s.hour);
			printf("enter min");
			scanf("%d",&s.min);
				printf("enter sec");
				scanf("%d",&s.sec);
				
				
				printf("\n total time\n");
			printf("\n hour= %d",s.hour);
				printf("\n min= %d",s.min);
					printf("\n sec= %d",s.sec);	
}