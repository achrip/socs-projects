//
// Created by shrimp on 8/11/2022.
//
#include <stdio.h>

int main(){
    int rep, cashback;
    long long int coffee, limit;

    scanf("%d", &rep);
    getchar();

    long long int final[rep];
    for (int i = 0; i < rep; i++){
        scanf("%lld %d %lld", &coffee, &cashback, &limit);
        getchar();

        //the cashback he could get
        long long int max = coffee*cashback/100;

        if (max > limit) final[i] = limit;
        else final[i] = max;
    }

    for (int i = 0; i < rep; i++){
        printf("Case #%d: %lld\n", (i + 1), final[i]);
    }
}