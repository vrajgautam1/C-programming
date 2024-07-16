#include<stdio.h>
void main(){
    int num;
    char alphabet;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("enter the alphabet\n");
    scanf(" %c",&alphabet);
    printf("%d %c",num,alphabet);
}