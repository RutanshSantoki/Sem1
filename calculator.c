#include<stdio.h>

int main()
{
    int num1,num2,result;
    char operator;

    //taking input for num1 operator and num2

    printf("Enter the value of num1:");
    scanf("%d",&num1);

    printf("Select operator you want to use (+,-,*,/):");
    scanf(" %s",&operator);

    printf("Enter the value of num2:");
    scanf("%d",&num2);
}

switch(operator)
{
    case "+" :
    {
        result=num1+num2;
        printf("%d+%d=%d\n",num1,num2,result);
    }

    case "-" :
    {
        result=num1-num2;
        printf("%d-%d=%d\n",num1,num2,result);
    }

    case "*" :
    {
        result=num1*num2;
        printf("%d*%d=%d"num1,num2,result);
    }

    case "/" :
     if (num2 != 0) {
                result = num1 / num2;
                printf("The final is: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }









