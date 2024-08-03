#include <stdio.h>
int main()
{
    for (int j = 1; j <= 5; j++)
    {

        for (int k = 4; k >= j; k--)
        {
            printf("  ");
        }

        for (int i = j; i >= 1; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}