#include <stdio.h>

void addition(int a, int b) {
    printf("Addition of %d and %d is %d\n", a, b, a + b);
}

void subtraction(int a, int b) {
    printf("Subtraction of %d and %d is %d\n", a, b, a - b);
}

void multiplication(int a, int b) {
    printf("Multiplication of %d and %d is %d\n", a, b, a * b);
}

void division(int a, int b) {
    if (b != 0) {
        printf("Division of %d and %d is %d\n", a, b, a / b);
    } else {
        printf("Cannot divide by zero\n");
    }
}

void modulus(int a, int b) {
    if (b != 0) {
        printf("Modulus of %d and %d is %d\n", a, b, a % b);
    } else {
        printf("Cannot calculate modulus with zero\n");
    }
}

int main() {
    int choice, num1, num2;

    while (1) {
        printf("\nPress 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for %%\nPress 0 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                addition(num1, num2);
                break;
            case 2:
                subtraction(num1, num2);
                break;
            case 3:
                multiplication(num1, num2);
                break;
            case 4:
                division(num1, num2);
                break;
            case 5:
                modulus(num1, num2);
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
