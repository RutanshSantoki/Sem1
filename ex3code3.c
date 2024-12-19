#include<stdio.h>

int main()
{
    int marks;

    //getting data from the user
    printf("Please enter the marks of the Students : ");
    scanf("%d",&marks);

    if(marks>=80){
        printf("Grade=A\n");
    }
    else if (marks>=60){
        printf("Grade=B\n");
    }
    else if(marks>=50){
        printf("Grade=C\n");
    }
    else if(marks>40){
        printf("Grade=D\n");
    }

    else
    {
        printf("Fail\n");

    }
    return 0;
}