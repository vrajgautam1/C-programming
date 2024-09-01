#include<stdio.h>

int main(){
    char word[100];
    int freq[256]={0};

    printf("enter a word\n");
    gets(word);

    for(int i = 0; word[i]!='\0'; i++){
        freq[(int)word[i]]++;
    }

    for(int i = 0; i<256; i++){
        if(freq[i]!=0){
            printf("%c = %d\n", i, freq[i]);
        }
    }
}