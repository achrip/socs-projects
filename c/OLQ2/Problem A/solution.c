#include <stdio.h>

void main (){
    int cash, card; 

    scanf("%d %d", &cash, &card);
    getchar();

    printf("%d\n", cash/card);
}