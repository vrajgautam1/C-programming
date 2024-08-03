#include <stdio.h>

int main()
{
    for (int j = 1; j <= 5; j++)
    {
        if(j == 1 || j==3){
            printf("* * * * *");
        }else if(j == 2){
            printf("*       *");
        }else{
            printf("* ");
        }
        printf("\n");
    }
}