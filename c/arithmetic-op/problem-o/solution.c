#include <stdio.h>

void main(){
    int p, q, sum[5];

    for (int i=0; i<4; ++i){
        scanf("%d %d", &p, &q);
        getchar();

        sum[i]=p*q;
    }

    int i=0;
    while (i<4){
        printf("%d\n", sum[i]);
        ++i;
    }
}