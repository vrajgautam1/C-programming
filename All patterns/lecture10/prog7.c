#include <stdio.h>

int main()
{
    char c = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%c ", c + j);
        }
        printf("\n");
    }
}