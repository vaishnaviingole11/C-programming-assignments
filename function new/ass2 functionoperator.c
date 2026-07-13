int main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    ope(a, b, op);

    return 0;
}

void ope(int a, int b, char op)
{
    if (op == '+')
        printf("Result = %d", a + b);
    else if (op == '-')
        printf("Result = %d", a - b);
    else if (op == '*')
        printf("Result = %d", a * b);
    else if (op == '%')
        printf("Result = %d", a % b);
    else if (op == '/')
    {
        if (b != 0)
            printf("Result = %.2f", (float)a / b);
        else
            printf("Division by zero is not allowed");
    }
    else
        printf("Invalid operator");
}