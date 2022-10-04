#include <stdio.h>

int main (){
    int i, j; 

    scanf("%d %d", &i, &j);

    for (int l=0; l<j; l++){
        printf("%d\n", i);
        i++; 
    }
    return 0; 
}