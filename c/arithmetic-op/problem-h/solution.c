#include <stdio.h>

void main(){
    double i, j, k, l; 
    double result[101];

    for (int p=0; p<3; ++p){
        result[p]=0; 
        scanf("%lf %lf %lf %lf", &i, &j, &k, &l); 
        getchar();

        i*=2; j*=2; k*=2; 
        result[p]=i+j+k+l; 
    }

    for (int p=0; p<3; ++p){
        printf("%.2lf\n", result[p]);
    }
    
}