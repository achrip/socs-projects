#include <stdio.h>

int main (){ 
    int num1, num2; 

    scanf("%d %d", &num1, &num2);
    getchar(); 

    for (int i=0; i<num2; i++){
        printf("%d\n", num1);
        num1++; 
    }

    return 0; 
}