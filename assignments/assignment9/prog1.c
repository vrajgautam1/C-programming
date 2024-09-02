#include<stdio.h>

int main(){
    FILE *file1 = fopen("even_file.txt","w");
    FILE *file2 = fopen("odd_file.txt","w");
    
    if(file1==NULL){
        printf("unable to access file1");
        return 1;
    }else{
        printf("file open successful");
    }

    if(file2==NULL){
        printf("unable to access file2");
        return 1;
    }else{
        printf("file open successful");
    }

    int i;
    for(i = 50; i<=70; i++){
        if(i%2 == 0){
            fputs(i,file1);
            fputs(", ",file1);
        }else{
            fputs(i,file2);
            fputs(", ",file2);
        }
    }

    fclose(file1);
    fclose(file2);

    printf("writing to file successful");
}