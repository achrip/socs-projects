#include <stdio.h>

void main(){
    int length, width; 
    double height;

    scanf("%d %d %lf", &length, &width, &height);
    getchar();

    double blanket = (double)length*width*3;
    double top = (double)width*height;

    printf("%.3lf\n", blanket+top);
}