#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int *ptr = array;
    for(int i = 0; i < 5; i++) {
        printf("Square of %d is %d\n", *(ptr + i), (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}

