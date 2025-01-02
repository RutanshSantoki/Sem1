#include <stdio.h>

// Function prototype
int num(int n);

int main()
{
    int ans;

    // Correctly passing an integer to the `num` function
    ans = num(1234);

    // Printing the result
    printf("Ans = %d\n", ans);

    return 0;
}

// Function definition
int num(int n)
{
    int temp;

    if (n == 0) // Corrected 'o' to '0'
    {
        return 0; // Base case
    }
    else
    {
        temp = n % 10; // Extract the last digit
        n = n / 10;    // Remove the last digit
        return temp + num(n); // Recursive call
    }
}
