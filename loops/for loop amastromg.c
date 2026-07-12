void main()
{
    int no = 153;
    int temp, rem, sum = 0;

    for(temp = no; temp > 0; temp = temp / 10)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
    }

    if(no == sum)
    {
        printf("%d is Armstrong number", no);
    }
    else
    {
        printf("%d is not Armstrong number", no);
    }
}