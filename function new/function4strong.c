strongno(int no);
void main() {
	int no;
	printf("enter no");
	scanf("%d",&no);
	int sum=strongno( no);
	if(sum)
		printf("strong no");
	else
		printf("not strong");

}
int strongno(int no)
 {
	int rem,sum=0,temp=no;
	while (temp>0)
	 {
		rem=temp%10;
		int fact=1,i=1;
		{
			while(i<=rem)
			 {
				fact=fact*i;
				i++;
			}

		}
	
	sum=sum+fact;
	temp=temp/10;
}
return sum=sum==no;
}