#include <stdio.h>

int main()
{

    for (int j = 1; j <= 5; j++)
    {
        for(int k = 1; k<j; k++){
            printf("  ");
        }
        for (int i = j; i <= 5; i++)
        {
            if (i % 2 != 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}