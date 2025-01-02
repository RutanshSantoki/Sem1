#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, areSame = 1;

    // Read the two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the strings character by character
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            areSame = 0; // Strings are not the same
            break;
        }
        i++;
    }

    // Output the result
    if (areSame)
        printf("Given strings are same.\n");
    else
        printf("Given two strings are not same.\n");

    return 0;
}
