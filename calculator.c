#include<stdio.h>

int main()
{
    int num1, num2, result;
    char operator;

    // Taking input for num1, operator, and num2
    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Select operator you want to use (+, -, *, /): ");
    scanf(" %c", &operator); // Use %c to read a single character

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    // Using a switch-case block for operator handling
    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}