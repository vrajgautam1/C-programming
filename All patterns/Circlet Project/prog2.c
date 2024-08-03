#include<stdio.h>

int main(){
    int num = 11;

for(int j = 0; j < 4; j++){
    for(int i = 0; i<=j; i++){
        printf("%d ", num);
        num++;
    }
    printf("\n");
}

}