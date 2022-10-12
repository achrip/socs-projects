#include <stdio.h>

void main(){
    int rep, percentage;
    unsigned int number; 
    double result[5];

    scanf("%d", &rep);
    getchar();

    for (int i=0; i<rep; i++){
        scanf("%d %d", &percentage, &number);
        getchar();

        result[i]=0;
        result[i]=(double) percentage/100*number;     
    }

    for (int i=0; i<rep; i++){
        printf("%.2lf\n", result[i]);
    }
}