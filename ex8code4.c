#include <stdio.h>
#include <string.h>

// Function to append part of s2 to s1
void abc(char s1[], char s2[]);

int main()
{
    char s1[100];
    char s2[100];

    // Input first string
    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0'; // Remove trailing newline

    // Input second string
    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0'; // Remove trailing newline

    // Call the function
    abc(s1, s2);

    return 0;
}

// Function to append part of s2 to s1
void abc(char s1[], char s2[])
{
    int n, j, i, c;

    j = strlen(s1); // Length of s1

    printf("Enter the number of characters to skip from the end of s2: ");
    scanf("%d", &c);

    // Starting point for copying from s2
    n = strlen(s2) - c;

    if (n < 0)
    {
        printf("Invalid input. Cannot skip more characters than the length of s2.\n");
        return;
    }

    // Append part of s2 to s1
    for (i = n; s2[i] != '\0'; i++)
    {
        s1[j] = s2[i];
        j++;
    }

    // Null-terminate the resulting string
    s1[j] = '\0';

    // Print the modified string
    printf("Resulting string: %s\n", s1);
}
