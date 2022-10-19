#include <stdio.h>

void main(){
    int rep;
    double p, q, r, s; 
    double sum[10]; 

    scanf("%d", &rep); 
    getchar();

    for (int i=0; i<rep; ++i){
        scanf("%lf %lf %lf %lf", &p, &q, &r, &s);
        getchar(); 

        sum[i] = ((2*p)+(s/2)+(2*q)+(4*r/3));
    }

    for (int i=0; i<rep; ++i){
        printf("%.2lf\n", sum[i]);
    }
}