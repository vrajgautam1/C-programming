#include <stdio.h>

int main()
{
    int num = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}