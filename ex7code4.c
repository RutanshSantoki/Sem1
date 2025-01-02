// calculator by using function
#include <stdio.h>

// Function prototypes
int add(int, int);
int sub(int, int);
int multi(int, int);
int div(int, int);

int main()
{
    int a, b, ans;

    // Input values
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Perform addition
    ans = add(a, b);
    printf("Sum = %d\n", ans);

    // Perform subtraction
    ans = sub(a, b);
    printf("Subtraction = %d\n", ans);

    // Perform multiplication
    ans = multi(a, b);
    printf("Multiplication = %d\n", ans);

    // Perform division with zero check
    if (b != 0)
    {
        ans = div(a, b);
        printf("Division = %d\n", ans);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }
}

// Function definitions
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}
