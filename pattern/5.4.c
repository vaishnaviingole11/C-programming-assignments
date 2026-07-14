void main()
{
    int n = 5;
    int row, col;

    for(row = n; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}