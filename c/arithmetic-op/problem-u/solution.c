#include <stdio.h>

void main(){
    int rep; 
    long long int degree, second;
    double rotation[5]; 

    scanf("%d", &rep);
    getchar();

    for (int i=0; i<3; ++i){
        scanf("%lld %lld", &degree, &second);
        getchar();

        rotation[i]=(double)degree*second/360;
    }

    for (int i=0; i<3; ++i){
        printf("%.2lf\n", rotation[i]);
    }
}