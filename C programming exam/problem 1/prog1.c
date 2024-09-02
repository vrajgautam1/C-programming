#include<stdio.h>

int main(){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);

    switch(num>0){
        case 1: 
        printf("the number is positive");
        break;

        case 0:
        switch(num<0)
        {
            case 1:
            printf("the number is negative");
            break;

            case 0:
            printf("the number is 0");
            break;
        }

    }

    return 0;
}