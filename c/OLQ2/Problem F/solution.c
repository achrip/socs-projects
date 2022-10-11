#include <stdio.h>
#include <math.h>

void main(){
    long long int i, j, k, l; 
    long long int sum1, sum2, arr[10]; 

    for (int x=0; x<3; x++){
        scanf("%*c%lld%*c%lld%*c%*c%*c%lld%*c%lld%*c", &i, &j, &k, &l);
        getchar();

        sum1 = i+j;
        sum2 = k-l; 
        arr[x] = sum1*sum2;
    }

    printf("%lld %lld %lld\n", arr[0], arr[1], arr[2]);
}

// cari contoh setiap item ragam bahasa