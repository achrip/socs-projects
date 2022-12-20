#include <stdio.h>
#include <math.h>

long long int logN(long long int num, long long int base) {
    if(num < base) return 0; 
    
    return 1 + logN(num/base, base); 
}

int main() {
    int cases; 
    long long int result; 
    scanf("%d", &cases);
    getchar(); 

    for (int i = 0; i < cases; i++) {
        result = 0; 
        long long int number, limit; 
        scanf("%lld %lld", &number, &limit);
        getchar(); 

        result = logN(limit, number); 

        printf("Case #%d: %lld\n", (i+1), result); 
    }

    return 0;
}