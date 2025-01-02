#include <stdio.h>

// Function prototype
int exp(int x, int y);

int main()
{
    int ans;
    int x = 2, y = 5; // You hard-coded the base and exponent
    ans = exp(x, y);

    printf("Ans = %d\n", ans);
    return 0;
}

// Function definition
int exp(int x, int y)
{
    if (y == 0)
    {
        return 1; // Base case: any number raised to the power of 0 is 1
    }
    else
    {
        return x * exp(x, y - 1); // Recursive case
    }
}
