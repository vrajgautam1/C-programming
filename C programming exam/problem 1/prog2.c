#include<stdio.h>

int main(){
    int array[5] = {99,71,102,30,21};

    int smallest = array[0];  

    for(int i = 1; i < 5; i++) {
        if(array[i] < smallest) {
            smallest = array[i];
        }
    }

    printf("The smallest element in the array is: %d\n", smallest);

    return 0;

}