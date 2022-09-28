#include <stdio.h>

int main (){

    long int p, q, r; 

    scanf("%ld %ld", &p, &q);
    long int i = p;
    r = 0;

    do {
        r += p; 
        p++;
        i++;
    } while (i <= q);

    printf("%ld\n", r);

    return 0;
}