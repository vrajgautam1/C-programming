#include <stdio.h>

int main()
{

    for (int j = 5; j >= 1; j--)
    {
        for (int k = 1; k < j; k++)
        {
            printf("  ");
        }
        for (int i = j; i <= 5; i++)
        {
            printf("%d ", i);
        }
        for (int k = 4; k >= j; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}