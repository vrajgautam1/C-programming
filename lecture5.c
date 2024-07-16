#include<stdio.h>
int main(){

    //size of operator
    // int a = 10;
    // float b = 20;
    // double c = 23;
    // printf("%d %d %d",sizeof a, sizeof b, sizeof c);

    //operator precednce
    // int a = 10;
    // int b = 4;
    // int c = 5;
    // printf("%d",c+a*b/c-b);

    //-1 implicit conversion

    // int a = 10;
    // float b = 20;
    // float c = (float)a + b;
    // printf("%f",c);

    // a is implicitly converted to float before addition

    //-2 explicit conversion
    // printf("%d",(int)(b)+a);

    //------------------------------------------------------------------------------
    //-----------------    LAB-WORK  -----------------------------------------------

    int a = 10;
    int b = 3;
    int c = (a*a + (2*a*b) + b*b);
    printf("%d",c);

}