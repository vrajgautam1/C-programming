#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main()
{
    struct student students[5];

    // Input loop
    for(int i = 0; i < 5; i++) {
        printf("Enter student roll_no: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter student name: ");
        scanf("%s", students[i].name);

        printf("Enter chem marks out of 100: ");
        scanf("%d", &students[i].chem_marks);

        printf("Enter maths marks out of 100: ");
        scanf("%d", &students[i].maths_marks);

        printf("Enter phy marks out of 100: ");
        scanf("%d", &students[i].phy_marks);
    }

    for(int i = 0; i < 5; i++) {
        int sum = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = (sum / 300.0) * 100; 

        printf("\nRoll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Chem marks: %d\n", students[i].chem_marks);
        printf("Maths marks: %d\n", students[i].maths_marks);
        printf("Phy marks: %d\n", students[i].phy_marks);
        printf("Percentage: %.2f%%\n", percentage); 
    }

    return 0;
}
