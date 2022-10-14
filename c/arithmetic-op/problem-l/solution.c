#include <stdio.h>

void main(){
    long long int poke, budget, bought; 

    scanf("%lld %lld", &budget, &poke); 
    getchar();

    printf("%lld\n", budget/poke); 
}