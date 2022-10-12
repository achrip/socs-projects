#include <stdio.h>

void main(){
    long long int i, j, k;
    long long int sum; 

    scanf("%lld %lld %lld", &i, &j, &k);
    getchar();

    sum=i*j*k;
    printf("%lld\n", sum);
}