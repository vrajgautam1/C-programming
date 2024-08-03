#include <stdio.h>
int main()
{
    for (int j = 5; j >= 1; j--)
    {

        for (int i = 1; i <= j; i++)
        {
            printf("%d ", i);
        }

        for (int k = 5; k > j; k--)
        {
            printf("  ");
        }
        for (int k = 5; k > j; k--)
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