#include<stdio.h>

int main()
{
    int marks;

        printf("Enter the marks of the students:");
        scanf("%d",&marks);

        if(marks>=80)
        {
            printf("Grade=A\n");
        }
        else if(marks>=70)
        {
            printf("Grade=B\n");
        }
        else if(marks>=60)
        {
            printf("Grade=C\n");
        }
        else if(marks>=50)
        {
            printf("Grade=D\n");
        }

        else
        {
            printf("Student is fail\n");
        }

            return 0;
}