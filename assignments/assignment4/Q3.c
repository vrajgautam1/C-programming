#include<stdio.h>

int main(){
    int number, firstNumber, lastNumber;
    int sum;

    printf("enter a number: ");
    scanf("%d",&number);

    lastNumber = number%10;

    firstNumber = number;
    while(firstNumber>10){
        firstNumber = firstNumber/10;
    }

    sum = firstNumber + lastNumber;

    printf("the sum of the first and the last digits of the given numbers is: %d",sum);
}