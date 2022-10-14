#include <stdio.h>

void main(){
    char i, j;

    // when inputting char with its ASCII value,
    // scan with a pointer to the char variable
    scanf("%c %c", &i, &j); 
    getchar();

    printf("%d\n", i*j);
}