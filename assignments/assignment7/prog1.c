#include<stdio.h>

int main(){
    char word[100];
    
    printf("enter your word:\n");
    gets(word);

    int length = 0;
    for(int i = 0; word[i] != '\0'; i++){
        length ++;
    }
    
    int flag=1;
    for(int i = 0; i<length/2; i++){
        if(word[i] != word[length - i - 1]){
            flag = 0;
            break;
        }
    }

    if(flag == 0){
        printf("\nnot a palindrome");
    }else if(flag == 1){
        printf("\n%s is a palindrome",word);
    }

    return 0;
}