#include <stdio.h>
int main()
{

    //-1
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // //-2
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 5; j >= i; j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // //-3
    // for (int i = 1; i <= 5; i++)
    // {

    //     for (int k = 4; k >= i; k--)
    //     {
    //         printf("  ");
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // //-4
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 1; k < i; k++)
    //     {
    //         printf("  ");
    //     }

    //     for (int j = 5; j >= i; j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // //-5

    // for (int j = 1; j <= 5; j++)
    // {

    // for (int k = 4; k >= j; k--)
    // {
    //     printf("  ");
    // }

    //     for (int i = j; i >= 1; i--)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    //-6

    // for (int j = 5; j >= 1; j--)
    // {

    //     for (int k = 1; k <= j; k++)
    //     {
    //         printf("  ");
    //     }

    //     for (int i = j; i <= 5; i++)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    //-7

    // for (int j = 5; j >= 1; j--)
    // {

    //     for (int k = 1; k <= j; k++)
    //     {
    //         printf("  ");
    //     }

    //     for (int i = j; i <= 5; i++)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

    //-8

    // for (int j = 1; j <= 5; j++)
    // {

    //     for (int k = 1; k < j; k++)
    //     {
    //         printf("  ");
    //     }

    //     for (int i = j; i <= 5; i++)
    //     {
    //         if (i % 2 != 0)
    //         {
    //             printf("1 ");
    //         }
    //         else if (i % 2 == 0)
    //         {
    //             printf("0 ");
    //         }
    //     }
    //     printf("\n");
    // }

    //-9

    // for (int j = 5; j >= 1; j--)
    // {
    //     for(int k=5; k>j; k--){
    //         printf("  ");
    //     }

    //     for (int i = j; i >= 1; i--)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    //-10

    // for(int j = 1; j <= 5; j++){

    //     for (int k = 1; k < j; k++){
    //         printf("  ");
    //     }

    //     for(int i = 5; i>=j; i--){
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    //-11

    // for (int j = 5; j >= 1; j--)
    // {

    //     for (int i = 1; i <= j; i++)
    //     {
    //         printf("%d ", i);
    //     }

    //     for(int k = 5; k>j; k--){
    //         printf("  ");
    //     }
    //     for(int k = 5; k>j; k--){
    //         printf("  ");
    //     }

    //     for (int i = j; i >= 1; i--)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    //-12

    // for (int j = 5; j >= 1; j--)
    // {

    //     for (int i = 1; i <= j; i++)
    //     {
    //         printf("%d ", i);
    //     }

    //     for (int k = 5; k > j; k--)
    //     {
    //         printf("  ");
    //     }
    //     for (int k = 5; k > j; k--)
    //     {
    //         printf("  ");
    //     }

    //     for (int i = j; i >= 1; i--)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    // for (int j = 1; j <= 5; j++)
    // {
    //     for (int i = 1; i <= j; i++)
    //     {
    //         printf("%d ", i);
    //     }
    //     for (int k = 5; k > j; k--)
    //     {
    //         printf("  ");
    //     }

    //     for (int k = 5; k > j; k--)
    //     {
    //         printf("  ");
    //     }

    //     for (int i = j; i >= 1; i--)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    //-13

    // for (int j = 5; j >= 1; j--)
    // {
    //     for (int i = 1; j >= i; i++)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    // for (int j = 2; j <= 5; j++)
    // {
    //     for (int i = 1; i <= j; i++)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    //-14

    for (int j = 1; j <= 5; j++)
    {
        for (int k = 5; k > j; k--)
        {
            printf("  ");
        }
        for (int i = 1; i <= 2 * j - 1; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

    //-15

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
