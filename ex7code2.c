#include <stdio.h>

int main()
{
    float principal, rate, total_amount;
    int period, year = 1;

    // Input values from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (e.g., 0.05 for 5%%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%d", &period);

    // Initialize total_amount with the principal
    total_amount = principal;

    // Calculate the total amount using a loop
    while (year <= period)
    {
        total_amount = total_amount * (1 + rate);
        year++;
    }

    // Display the result
    printf("Total amount after %d years: %.2f\n", period, total_amount);

    return 0;
}
