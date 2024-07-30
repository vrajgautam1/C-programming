#include<stdio.h>

int main(){
    // int num1, num2;
    // printf("enter the value of number1\n");
    // scanf("%d",&num1);
    // printf("enter the value of number2\n");
    // scanf("%d", &num2);

    // if(num1>num2){
    //     printf("\n%d is greater\n",num1);
    // }else{
    //     printf("%d is greater",num2);
    // }


    //-2
    // float number;
    // int result;
    // printf("enter the number\n");
    // result = scanf("%f",&number);

    // printf("%d",result);
    
    // if(result != 1){
    //     printf("invalid input");
    // }else if(number<0){
    //     printf("%.2f is a negative number",number);
    // }else if(number == 0){
    //     printf("%.2f is a neutral number",number);
    // }else if(number>0){
    //     printf("%.2f is a positive number",number);
    // }

    //-3
    int english, maths, science;
    float average;
    printf("enter marks scored in english\n");
    scanf("%d",&english);

    printf("enter marks scored in maths\n");
    scanf("%d",&maths);

    printf("enter marks scored in science\n");
    scanf("%d",&science);

    average = (float)(english+maths+science)/3;
    printf("the average is %.2f",average);

}