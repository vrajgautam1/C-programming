#include <stdio.h>

int main()
{
    char inputword[100];
    printf("Enter any string: ");
    fgets(inputword, 100, stdin);
    char *ptr = inputword; 
    int counter = 0;
    while (*ptr != '\0')
    {   
        counter++;
        ptr++;
    }
    printf("The length of the string is %d\n", counter);
    return 0;

}
