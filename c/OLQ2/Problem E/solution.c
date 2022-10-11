#include <stdio.h>

void main(){
    int i, j; 

    scanf("%d %d", &i, &j);
    getchar();

    printf("%d\n", i+j);
    printf("%d\n", i-j);
    printf("%d\n", i*j);
    printf("%d\n", i/j);
    printf("%d\n", i%j);
}