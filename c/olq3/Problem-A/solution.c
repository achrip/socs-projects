#include <stdio.h>

int main (){
    float i, j, k; 

    scanf("%f %f %f", &i, &j, &k); 
    getchar(); 

    i=i*0.2;
    j=j*0.3;
    k=k*0.5;
    printf("%.2f\n", i+j+k);

    return 0; 
}