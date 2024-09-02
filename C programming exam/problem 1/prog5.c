#include<stdio.h>

struct house{
    int room_quantity;
    int established_year;
    char city[20];
};

int main(){
    int num;
    printf("how many houses' details do you want to enter?\n");
    scanf("%d",&num);
    struct house housedetails[num];

    for(int i=0; i<num; i++){
        printf("enter room quantity: %d\n",i);
        scanf("%d",&housedetails[i].room_quantity);

        printf("enter established year: %d\n",i);
        scanf("%d",&housedetails[i].established_year);

        printf("enter city: %d\n",i);
        scanf("%d",housedetails[i].city);
    }

    for(int i = 0; i<num; i++){
        printf("room quantity is: %d\n",housedetails[i].room_quantity);
        printf("established year is: %d\n",housedetails[i].established_year);
        printf("room quantity is: %d\n",housedetails[i].city);
    }
    
}