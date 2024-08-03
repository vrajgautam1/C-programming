#include <stdio.h>
int main()
{

    for (int j = 1; j <= 5; j++)
    {
        for (int k = 5; k > j; k--)
        {
            printf("  ");
        }
        for (int i = 1; i <= 2 * j - 1; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}