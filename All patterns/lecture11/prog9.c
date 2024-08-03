#include<stdio.h>
int main(){
        for (int j = 5; j >= 1; j--)
    {
        for (int i = 1; j >= i; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    for (int j = 2; j <= 5; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}