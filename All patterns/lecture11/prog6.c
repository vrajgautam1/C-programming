#include <stdio.h>
int main()
{
    for (int j = 1; j <= 5; j++)
    {

        for (int k = 1; k < j; k++)
        {
            printf("  ");
        }

        for (int i = 5; i >= j; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}