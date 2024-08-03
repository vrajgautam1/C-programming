#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (j % 2 != 0)
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
    //-unusual pattern
    // for(int i = 1; i<=5; i++){
    //     for(int j = i; j<=5; j++){
    //         if(j%i!=0) {
    //             printf("1 ");
    //         }else{
    //             printf("0 ");
    //         }
    //     }
    //     printf("\n");
    // }
}