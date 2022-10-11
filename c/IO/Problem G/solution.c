#include <stdio.h>

int main(){ 
    char c [100];

    scanf("%[^\n]s", c);
    printf("Happy Birthday to %s.\n", c);

    return 0;
}