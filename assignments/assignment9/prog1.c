#include<stdio.h>

int main(){
    FILE *file1 = fopen("even_file.txt","w");
    FILE *file2 = fopen("odd_file.txt","w");
    
    if(file1==NULL){
        printf("unable to access file1\n");
        return 1;
    }else{
        printf("file open successful\n");
    }

    if(file2==NULL){
        printf("unable to access file2\n");
        return 1;
    }else{
        printf("file open successful\n");
    }

    int i;
    for(i = 50; i<=70; i++){
        if(i%2 == 0){
            fprintf(file1, "%d ", i);
        }else{
            fprintf(file2, "%d ", i);
        }
    }

    fclose(file1);
    fclose(file2);

    printf("writing to file successful");
}