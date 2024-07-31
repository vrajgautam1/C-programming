#include <stdio.h>

int main()
{
    int number, count=0;
    printf("Enter any Number: ");
    scanf("%d", &number);

    if(number == 0){
        count = 1;
    }else{
        while (number != 0)
        {
            count++;
            number = number / 10;
        }
    }

    printf("total number of digits = %d", count);
}