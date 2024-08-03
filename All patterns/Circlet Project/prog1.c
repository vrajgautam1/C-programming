#include <stdio.h>

int main()
{
    int num = 41;

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i <= j; i++)
        {
            printf("%d ", num + i);
        }
        printf("\n");
    }
}