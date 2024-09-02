#include<stdio.h>

int main(){
    FILE *file = fopen("file1.txt","a");

    if(file==NULL){
        printf("unable to open file1\n");
        return 1;
    }
    

    // fputs("hello programmers, welcome to full stack development\n", file);

    
    fclose(file);
    // printf("data written to file");
}