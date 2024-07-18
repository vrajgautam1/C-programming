#include <stdio.h>
int main()
{

    // size of operator
    //  int a = 10;
    //  float b = 20;
    //  double c = 23;
    //  printf("%d %d %d",sizeof a, sizeof b, sizeof c);

    // operator precednce
    //  int a = 10;
    //  int b = 4;
    //  int c = 5;
    //  printf("%d",c+a*b/c-b);

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

    //-1
    int a = 10;
    int b = 3;
    int c = (a * a + (2 * a * b) + b * b);
    // printf("%d", c);

    //-2
    int d = (a*a - (2 * a * b) + b*b);
    // printf("%d",d);

    //-3
    int e = ((a*a*a) + (3*a*a*b) + (3*a*b*b) + (b*b*b));
    // printf("%d",e);

    //-4
    int temp = a;
    a = b;
    b = temp;

    // printf("%d %d",a,b);
}