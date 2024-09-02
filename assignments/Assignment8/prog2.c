#include<stdio.h>

int main(){
    int size;
    printf("Enter array's size: ");
    scanf("%d",&size);

    int twoDArray[size][size];

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("enter element for [%d][%d]: ",i,j);
            scanf("%d",&twoDArray[i][j]);
        }
    }

    int *ptr = &twoDArray[0][0];

    printf("Cubes of the array are: \n");

    // printf("%d ",*(ptr));
    // for(int i=0; i<size*size; i++){
    //    printf("%d ",*(ptr+i) * *(ptr+i) * *(ptr+i));
    // }

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ",*(ptr+i*size+j) * *(ptr+i*size+j) * *(ptr+i*size+j));
        }
        printf("\n");
    }


}