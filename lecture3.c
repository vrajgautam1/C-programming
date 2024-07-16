#include<stdio.h>

int main(){
    int num1 = 12;
    int num2 = 5;
    printf("addition is:%d \nSubtraction is:%d \nMultiplication is:%d \nDivision is:%.1f \nModulo is:%d\n", (num1+num2), (num1-num2), (num1*num2), ((float)num1/num2), (num1%num2));


    printf("---------\n|\t\t|\n|5x5=25 |\n|\t\t|\n---------");

    char *name = "Vraj Gautam";
    int age = 25;
    float height = 5.7;
    char bloodgroup = 'A';
    printf("\nI am %s my, age is %d, and these are my details:\nheight:%.1f feet\nBlood-group:%c",name,age,height,bloodgroup); 

    return 0;
}