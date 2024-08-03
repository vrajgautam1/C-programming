#include <stdio.h>

int main()
{

    for (int j = 1; j <= 5; j++)
    {

        for (int i = 1; i <= j; i++)
        {
            printf("%d ", i);
        }

        for (int k = j; k < 5; k++)
        {
            printf("  ");
        }

        for (int k = j; k < 5; k++)
        {
            printf("  ");
        }

        for (int l = j; l >= 1; l--)
        {
            printf("%d ", l);
        }

        printf("\n");
    }
}