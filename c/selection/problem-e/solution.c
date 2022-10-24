#include <stdio.h>

void main(){
    long long int i, j, k, l; 

    scanf("%d %d %d %d", &i, &j, &k, &l); 
    getchar(); 

    long long int leftHandSide = i*j; 
    long long int rightHandSide = k+l; 

    if (leftHandSide>rightHandSide){
        printf("True\n"); 
    } else{
        printf("False\n"); 
    }
}