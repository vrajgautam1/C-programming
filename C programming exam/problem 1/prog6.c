#include<stdio.h>

int main() {
    FILE *file = fopen("myfile.txt", "w");

    if (file == NULL) {
        printf("Unable to open file");
        return 1; 
    } else {
        printf("File open successful\n");
    }

    int num;
    printf("\nHow many employees do you want to enter?\n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        char name[20];
        char designation[20];
        printf("Enter name of employee: ");
        scanf("%s", name);
        fputs(name, file);
        fputs(": ", file);
        printf("Enter employee designation: ");
        scanf("%s", designation);
        fputs(designation, file);
        fputs("\n", file);
    }

    fclose(file);

    printf("Employee details written successfully\n");

    return 0;
}
