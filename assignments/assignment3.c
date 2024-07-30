#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("enter your marks: ");
    scanf("%d", &marks);

    //-1
    grade = (marks > 90) ? 'A' : 
            (marks > 80) ? 'B' : 
            (marks > 70) ? 'C' : 
            (marks > 60) ? 'D' : 
                           'F';

    printf("Your Grade is %c, ", grade);

    //-2
    switch (grade)
    {
    case 'A':
        printf("Excellent work! ");
        break;

    case 'B':
        printf("Well done, ");
        break;

    case 'C':
        printf("Good Job, ");
        break;

    case 'D':
        printf("You passed, but you could do better, ");
        break;

    case 'F':
        printf("Sorry, You Failed ");
        break;

    default:
        break;
    }

    //-3
    if (grade == 'F')
    {
        printf("Please try again next time");
    }
    else
    {
        printf("Congratulations you are eligible for the next level.");
    }
}


