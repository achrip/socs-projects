#include <stdio.h>

void main(){
    long long int before, after; 

    scanf("%lld %lld", &before, &after);
    getchar();

    double discount; 
    discount =(double)after/before*100;

    printf("%.2f%%\n", 100-discount);
}