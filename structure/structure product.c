#include<stdio.h>

struct product
{
    int productid;
    char productname[20];
    double productprice;
};

void main()
{
    struct product p1, p2;

    // Product 1
    printf("Enter Product ID: ");
    scanf("%d", &p1.productid);

    printf("Enter Product Name: ");
    fflush(stdin);
    gets(p1.productname);

    printf("Enter Product Price: ");
    scanf("%lf", &p1.productprice);

    printf("\n--- Product 1 Details ---");
    printf("\nProduct ID : %d", p1.productid);
    printf("\nProduct Name : %s", p1.productname);
    printf("\nProduct Price : %.2lf\n", p1.productprice);

    // Product 2
    printf("\nEnter Product ID: ");
    scanf("%d", &p2.productid);

    printf("Enter Product Name: ");
    fflush(stdin);
    gets(p2.productname);

    printf("Enter Product Price: ");
    scanf("%lf", &p2.productprice);

    printf("\n--- Product 2 Details ---");
    printf("\nProduct ID : %d", p2.productid);
    printf("\nProduct Name : %s", p2.productname);
    printf("\nProduct Price : %.2lf\n", p2.productprice);
}