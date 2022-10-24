#include <stdio.h>

int main (){
    int side, temp; 

    scanf("%d", &side); 
    getchar(); 

    temp = (side-3)/2;

    for (int i=side/2; i>0; -i){
        printf("*");
    }
    // for (int i=0; i<side; ++i){ 
    //     printf("*");
    //     for (int j=temp; j>0; --j){
    //         printf(" ");
    //     }
    //     printf("*");

    //     for (int j=temp; j>0; --j){
    //         printf(" ");
    //     }
    //     printf("*");
        
    //     printf("\n");
    //     --temp; 
    // }

    for (int i=0; i<side; ++i){
        printf("*"); 
    }
    printf("\n"); 
    return 0;
}