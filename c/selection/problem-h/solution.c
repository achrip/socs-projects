#include <stdio.h>

void main(){
    char i, j, k; 

    scanf("%c %c %c", &i, &j, &k); 
    getchar(); 

    // printf("%o %o %o\n", i, j, k);

    if (i>j && i>k){
        if (j>k){
            printf("3 2 1\n");
        } else{
            printf("2 3 1\n"); 
        }
    } else if (j>i && j>k){
        if (i>k){
            printf("3 1 2\n");
        } else{
            printf("1 3 2\n");
        }
    } else if (k>i && k>j){
        if (i>j){
            printf("2 1 3\n"); 
        } else {
            printf("1 2 3\n");
        }
    }
}