#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a;
    int b;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);

    int operation;
    printf("Enter operation number\n");
    printf("For add 1\n");
    printf("For sub 2\n");
    printf("For mul 3\n");
    printf("For divide 4\n");
    scanf("%d", &operation);

    float result;

    if (operation == 1)
    {
        result = sum(a, b);
    }
    if (operation == 2)
    {
        result = sub(a, b);
    }
    if (operation == 3)
    {
        result = mul(a, b);
    }
    if (operation == 4)
    {
        result = divide(a, b);
    }
    printf("Result is %f\n", result);
    return 0;
}
