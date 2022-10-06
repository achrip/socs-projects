#include <stdio.h>

void main(){
    int num1, num2; 

    scanf("%d %*c %d", &num1, &num2); 
    getchar();

    printf("%d\n", num1+num2);
}