#include <stdio.h>
#include <stdlib.h>

void main(){
    int lift1, lift2, liftBroken; 

    scanf("%d %d %d", &lift1, &lift2, &liftBroken); 
    getchar();

    int out1 = abs(lift1-liftBroken);
    int out2 = abs(lift2-liftBroken); 

    if (out1==out2){
        printf("%d\n", out1); 
    } else{
        printf("-1\n");
    }
}