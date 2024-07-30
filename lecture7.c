#include<stdio.h>

int main(){
    // int a,b,c;
    // printf("enter the value of a: ");
    // scanf("%d",&a);
    // printf("enter the value of b: ");
    // scanf("%d",&b);
    // printf("enter the value of c: ");
    // scanf("%d",&c);    

    // (a<b)?((a<c)?printf("%d is the smallest",a):printf("%d is the smallest",c)):
    // ((b<c)?printf("%d is the smallest",b):printf("%d is the smallest",c));
    
    printf("Airtel Jio Call service");
    int user_choice, recharge_option_no;
    printf("\n\npress 1 for English\npress 2 for Gujarati\npress 3 for Hindi\n");
    printf("enter your choice ");
    scanf("%d",&user_choice);

    switch (user_choice)
    {
    case 1:
        printf("\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\n");
        printf("enter your choice: ");
        scanf("%d",&recharge_option_no);
        switch (recharge_option_no)
        {
        case 1:
            printf("you have successfully done Internet recharge");
            break;
        case 2:
            printf("you have successfully done Top-up Recharge");
            break;
        case 3:
            printf("you have successfully done Special recharge");
            break;    
        default:
            printf("invalid choice");
            break;
        }
        break;

    case 2:
        printf("\nInternet Recharge mate 1 dabavo\nTop-up Recharge mate 2 dabavo\nSpecial Recharge mate 3 dabavo\n");
        printf("tamari pasand ahiya darj karo: ");
        scanf("%d",&recharge_option_no);
        switch (recharge_option_no)
        {
        case 1:
            printf("Internet recharge safaltapurvak thaay gayu chhe");
            break;
        case 2:
            printf("Top-up Recharge safaltapurvak thhay gayu chhe");
            break;
        case 3:
            printf("Special recharge safaltapurvak thhay gayu chhe");
            break;    
        default:
            printf("amanya ank");
            break;
        }
        break;

    case 3:
        printf("\nInternet Recharge ke liye 1 dabaye\nTop-up Recharge ke liye 2 dabaye\nSpecial Recharge ke liye 3 dabaye\n");
        printf("apni pasand yaha darj karein: ");
        scanf("%d",&recharge_option_no);
        switch (recharge_option_no)
        {
        case 1:
            printf("Internet recharge ");
            break;
        case 2:
            printf("Top-up Recharge safaltapurvak ho chuka hai");
            break;
        case 3:
            printf("Special recharge safaltapurvak ho chuka hai");
            break;    
        default:
            printf("galat pasand");
            break;
        }
        break;
    
    default:
        printf("invalid choice");
        break;
    }
}