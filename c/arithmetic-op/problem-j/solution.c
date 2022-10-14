#include <stdio.h>

void main (){
    double bot, comment; 

    scanf("%lf %lf", &bot, &comment);
    getchar();

    double decimal=bot/comment; 
    double percentage=100/decimal; 

    printf("%.4lf%%\n", percentage);
}