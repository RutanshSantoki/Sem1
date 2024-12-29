#include<stdio.h>
int main()
{
    int a = 0, b = 1, c, h, i;

    printf("Enter the number of terms: ");
    scanf("%d", &h);

    if (h <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (h == 1) {
        printf("Fibonacci Series: %d\n", a);
    } else {
        printf("Fibonacci Series: %d\t%d\t", a, b);
        for (i = 3; i <= h; i++) {
            c = a + b;
            printf("%d\t", c);
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}
