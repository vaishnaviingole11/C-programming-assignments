#include <stdio.h>

struct Complex
{
    int real;
    int imaginary;
};

void main()
{
    struct Complex c1;

    printf("Enter real part: ");
    scanf("%d", &c1.real);

    printf("Enter imaginary part: ");
    scanf("%d", &c1.imaginary);
//complex no =a+bi
    printf("Complex Number = %d + %di", c1.real, c1.imaginary);
}