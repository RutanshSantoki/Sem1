#include <stdio.h>

struct rresult
{
    int id;
    char name[20];
    int sub[3];
    int total;
};

int main()
{
    struct rresult stud[5];
    int i, j, max, pos;

    // Input student data
    for (i = 0; i < 5; i++)
    {
        printf("Enter Student ID and Name: ");
        scanf("%d %s", &stud[i].id, stud[i].name);

        stud[i].total = 0; // Initialize total marks to zero

        printf("Enter marks for 3 subjects: ");
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &stud[i].sub[j]);
        }
    }

    // Calculate total marks for each student
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            stud[i].total += stud[i].sub[j];
        }
    }

    // Find the student with maximum total marks
    max = stud[0].total;
    pos = 0;
    for (i = 1; i < 5; i++)
    {
        if (stud[i].total > max)
        {
            max = stud[i].total;
            pos = i;
        }
    }

    // Print all student details
    printf("\nStudent ID\tStudent Name\tTotal Marks\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t\t%s\t\t%d\n", stud[i].id, stud[i].name, stud[i].total);
    }

    // Print the student with the maximum marks
    printf("\nStudent with maximum marks:\n");
    printf("ID: %d\nName: %s\nTotal Marks: %d\n", stud[pos].id, stud[pos].name, stud[pos].total);

    return 0;
}
