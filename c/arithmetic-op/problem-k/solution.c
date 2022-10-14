#include <stdio.h>

void main(){
    double interest, deposit, total, tmp; 

    scanf("%lf %lf", &deposit, &interest);
    getchar();

    for (int i=0; i<3; ++i){
        tmp=deposit*interest/100;
        total=deposit+tmp; 
        deposit=total;
    }

    printf("%.2lf\n", total);
}