#include <stdio.h>

void main (){
    int i; 

    scanf("%d", &i);
    getchar();

    if (i%2==0){
        printf("EVEN\n");
    } else{
        printf("ODD\n");
    }
}