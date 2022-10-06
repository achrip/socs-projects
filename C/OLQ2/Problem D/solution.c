#include <stdio.h>

void main(){
    int i, j;

    scanf("%d", &i);
    getchar();

    printf("%d plus %d is %d\n", i, i, j = i*2);
    printf("minus one is %d\n", j-1);
}